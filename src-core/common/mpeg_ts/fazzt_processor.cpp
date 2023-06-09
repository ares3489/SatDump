#include "fazzt_processor.h"
#include <cstring>

namespace fazzt
{
    std::vector<FazztFile> FazztProcessor::work(std::vector<uint8_t> fazzt_frame)
    {
        std::vector<FazztFile> finished_files;

        if (fazzt_frame.size() < 8)
            return finished_files;

        // Parse header
        uint8_t pkt_type = fazzt_frame[1];
        uint16_t pkt_length = fazzt_frame[3] << 8 | fazzt_frame[2];
        uint32_t id = fazzt_frame[7] << 24 | fazzt_frame[6] << 16 | fazzt_frame[5] << 8 | fazzt_frame[4];

        bool file_exists = files_in_progress.count(id) > 0;

        if (pkt_length <= fazzt_frame.size())
        {
            if (pkt_type == 0x03) // Head
            {
                std::string filename((char *)&fazzt_frame[84]);
                std::string path((char *)&fazzt_frame[188]);
                uint16_t parts = fazzt_frame[73] << 8 | fazzt_frame[72];
                uint32_t length = fazzt_frame[175] << 24 | fazzt_frame[174] << 16 | fazzt_frame[173] << 8 | fazzt_frame[172];

                FazztFile file;
                file.data.resize(length * 100); // Be safe
                file.size = length;
                file.name = filename;
                file.parts = parts;

                if (files_in_progress.count(id) > 0)
                {
                    files_in_progress[id].size = length;
                    files_in_progress[id].parts = parts;
                    files_in_progress[id].name = filename;
                }
                else
                    files_in_progress.insert({id, file});
            }
            else if (pkt_type == 0x01 && file_exists) // Body
            {
                uint16_t part = fazzt_frame[9] << 8 | fazzt_frame[8];
                if (part < files_in_progress[id].parts)
                    memcpy(&files_in_progress[id].data[part * 1411], &fazzt_frame[16], 1411);
            }
            else if (pkt_type == 0xFF && file_exists) // Tail
            {
                if (files_in_progress[id].data.size() > 0 && files_in_progress[id].size > 0)
                {
                    files_in_progress[id].data.resize(files_in_progress[id].size);
                    finished_files.push_back(files_in_progress[id]); // Push the file out
                    files_in_progress.erase(id);
                }
            }
        }

        return finished_files;
    }
};
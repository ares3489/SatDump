#include "amsu_a2_reader.h"
#include "common/ccsds/ccsds_time.h"

namespace aqua
{
    namespace amsu
    {
        AMSUA2Reader::AMSUA2Reader()
        {
            for (int i = 0; i < 2; i++)
                channels[i].resize(30);
            lines = 0;
        }

        AMSUA2Reader::~AMSUA2Reader()
        {
            for (int i = 0; i < 2; i++)
                channels[i].clear();
        }

        void AMSUA2Reader::work(ccsds::CCSDSPacket &packet)
        {
            if (packet.payload.size() < 350)
                return;

            int pos = 18;
            for (int i = 0; i < 30 * 4; i++)
            {
                lineBuffer[i] = packet.payload[pos + 0] << 8 | packet.payload[pos + 1];
                pos += 2;
            }

            // Plot into an images
            for (int channel = 0; channel < 2; channel++)
                for (int i = 0; i < 30; i++)
                    channels[channel][lines * 30 + 30 - i] = lineBuffer[i * 4 + channel];

            timestamps.push_back(ccsds::parseCCSDSTimeFullRawUnsegmented(&packet.payload[1], -4383, 15.3e-6));

            // Frame counter
            lines++;

            for (int i = 0; i < 2; i++)
                channels[i].resize((lines + 1) * 30);
        }

        image::Image<uint16_t> AMSUA2Reader::getChannel(int channel)
        {
            return image::Image<uint16_t>(channels[channel].data(), 30, lines, 1);
        }
    } // namespace amsu
} // namespace aqua
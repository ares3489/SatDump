#pragma once

#include "imgui/imgui.h"
#include <mutex>

namespace widgets
{
    class FFTPlot
    {
    private:
        float *values;
        int values_size;
        std::mutex work_mutex;

    public:
        float scale_min, scale_max;
        float scale_resolution;

    public:
        FFTPlot(float *v, int size, float min, float max, float scale_res = 20);
        void draw(ImVec2 size);

        void set_size(int size)
        {
            work_mutex.lock();
            values_size = size;
            work_mutex.unlock();
        }
    };
}
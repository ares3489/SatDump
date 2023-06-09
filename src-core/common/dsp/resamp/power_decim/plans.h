#pragma once

#include "fir_1024_64.h"
#include "fir_128_16.h"
#include "fir_16_8.h"
#include "fir_2048_64.h"
#include "fir_256_32.h"
#include "fir_2_2.h"
#include "fir_32_8.h"
#include "fir_4096_64.h"
#include "fir_4_2.h"
#include "fir_512_32.h"
#include "fir_64_8.h"
#include "fir_8192_128.h"
#include "fir_8_4.h"

/*
   This was copied from SDR++, as
   I would have re-generated the same anyway
*/

namespace dsp::power_decim
{
    struct stage
    {
        unsigned int decimation;
        unsigned int tapcount;
        const float *taps;
    };

    struct plan
    {
        unsigned int stageCount;
        const stage *stages;
    };

    const unsigned int plan_1024_len = 3;
    const stage plan_1024[] = {
        {64, fir_1024_64_len, fir_1024_64_taps},
        {8, fir_16_8_len, fir_16_8_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_128_len = 3;
    const stage plan_128[] = {
        {16, fir_128_16_len, fir_128_16_taps},
        {4, fir_8_4_len, fir_8_4_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_16_len = 2;
    const stage plan_16[] = {
        {8, fir_16_8_len, fir_16_8_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_2_len = 1;
    const stage plan_2[] = {
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_2048_len = 4;
    const stage plan_2048[] = {
        {64, fir_2048_64_len, fir_2048_64_taps},
        {8, fir_32_8_len, fir_32_8_taps},
        {2, fir_4_2_len, fir_4_2_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_256_len = 3;
    const stage plan_256[] = {
        {32, fir_256_32_len, fir_256_32_taps},
        {4, fir_8_4_len, fir_8_4_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_32_len = 3;
    const stage plan_32[] = {
        {8, fir_32_8_len, fir_32_8_taps},
        {2, fir_4_2_len, fir_4_2_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_4_len = 2;
    const stage plan_4[] = {
        {2, fir_4_2_len, fir_4_2_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_4096_len = 4;
    const stage plan_4096[] = {
        {64, fir_4096_64_len, fir_4096_64_taps},
        {8, fir_64_8_len, fir_64_8_taps},
        {4, fir_8_4_len, fir_8_4_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_512_len = 3;
    const stage plan_512[] = {
        {32, fir_512_32_len, fir_512_32_taps},
        {8, fir_16_8_len, fir_16_8_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_64_len = 3;
    const stage plan_64[] = {
        {8, fir_64_8_len, fir_64_8_taps},
        {4, fir_8_4_len, fir_8_4_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_8_len = 2;
    const stage plan_8[] = {
        {4, fir_8_4_len, fir_8_4_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plan_8192_len = 4;
    const stage plan_8192[] = {
        {128, fir_8192_128_len, fir_8192_128_taps},
        {8, fir_64_8_len, fir_64_8_taps},
        {4, fir_8_4_len, fir_8_4_taps},
        {2, fir_2_2_len, fir_2_2_taps},
    };

    const unsigned int plans_len = 13;
    const plan plans[]{
        {plan_2_len, plan_2},
        {plan_4_len, plan_4},
        {plan_8_len, plan_8},
        {plan_16_len, plan_16},
        {plan_32_len, plan_32},
        {plan_64_len, plan_64},
        {plan_128_len, plan_128},
        {plan_256_len, plan_256},
        {plan_512_len, plan_512},
        {plan_1024_len, plan_1024},
        {plan_2048_len, plan_2048},
        {plan_4096_len, plan_4096},
        {plan_8192_len, plan_8192},
    };
}

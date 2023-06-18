#ifndef AUDIODECODERCLASS_H
#define AUDIODECODERCLASS_H

#include "hardware/pll.h"
#include "hardware/clocks.h"
#include "hardware/structs/clocks.h"
#include "pico/audio_i2s.h"
#include "pico/stdlib.h"

class audioDecoderClass
{

private:
    audio_i2s_config_t m_config;

public:
    audioDecoderClass();
};

#endif // AUDIODECODERCLASS_H

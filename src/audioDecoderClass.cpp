#include "audioDecoderClass.h"
#include <stdio.h>
#include <math.h>

//#include "hardware/pll.h"
//#include "hardware/clocks.h"
//#include "hardware/structs/clocks.h"
//#include "pico/audio_i2s.h"
//#include "pico/stdlib.h"

#include "pinDefs.h"

audioDecoderClass::audioDecoderClass()
{
    m_config = {
            .data_pin = I2S_SDO,
            .clock_pin_base = I2S_BCK,
            .dma_channel = 0,
            .pio_sm = 0
    };
    /*
    output_format = audio_i2s_setup(&audio_format, &audio_format, &m_config);
    if (!output_format) {
        panic("PicoAudio: Unable to open audio device.\n");
    }

    ok = audio_i2s_connect(producer_pool);
    assert(ok);
    { // initial buffer data
        audio_buffer_t *buffer = take_audio_buffer(producer_pool, true);
        int32_t *samples = (int32_t *) buffer->buffer->bytes;
        for (uint i = 0; i < buffer->max_sample_count; i++) {
            samples[i*2+0] = 0;
            samples[i*2+1] = 0;
        }
        buffer->sample_count = buffer->max_sample_count;
        give_audio_buffer(producer_pool, buffer);
    }
    audio_i2s_set_enabled(true);
*/
}

# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)
set(PICO_SDK_PATH "/home/leviathan/Documents/git/Pico_official/pico/pico-sdk")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

# We also need PICO EXTRAS
include(pico_extras_import.cmake)

project(WaveGuide C CXX ASM)

set(PICO_CXX_ENABLE_EXCEPTIONS 1)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

add_subdirectory(my_pico_audio)
add_subdirectory(my_pico_audio_i2s)

# Add executable. Default name is the project name, version 0.1

add_executable(WaveGuide WaveGuide.cpp pinDefs.h
                         audioDecoderClass.cpp audioDecoderClass.h)

pico_set_program_name(WaveGuide "WaveGuide")
pico_set_program_version(WaveGuide "0.1")

pico_enable_stdio_uart(WaveGuide 1)
pico_enable_stdio_usb(WaveGuide 0)

# Add the standard library to the build
target_link_libraries(WaveGuide
                      pico_stdlib
                      my_pico_audio_i2s
                      )

# Add any user requested libraries
target_link_libraries(WaveGuide
        hardware_spi
        hardware_i2c
        hardware_pio
        hardware_interp
        hardware_timer
        hardware_watchdog
        hardware_clocks
        pico_multicore
        pico_stdlib
        )

target_compile_definitions(WaveGuide PRIVATE
    #define for our example code
    USE_AUDIO_I2S=1
)
pico_add_extra_outputs(WaveGuide)


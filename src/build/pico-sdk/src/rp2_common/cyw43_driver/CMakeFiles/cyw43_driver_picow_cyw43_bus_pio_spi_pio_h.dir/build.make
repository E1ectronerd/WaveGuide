# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/leviathan/Documents/git/WaveGuide/src/WaveGuide

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/leviathan/Documents/git/WaveGuide/src/WaveGuide/build

# Utility rule file for cyw43_driver_picow_cyw43_bus_pio_spi_pio_h.

# Include the progress variables for this target.
include pico-sdk/src/rp2_common/cyw43_driver/CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h.dir/progress.make

pico-sdk/src/rp2_common/cyw43_driver/CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h: pico-sdk/src/rp2_common/cyw43_driver/cyw43_bus_pio_spi.pio.h


pico-sdk/src/rp2_common/cyw43_driver/cyw43_bus_pio_spi.pio.h: /home/leviathan/Documents/git/Pico_official/pico/pico-sdk/src/rp2_common/cyw43_driver/cyw43_bus_pio_spi.pio
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/leviathan/Documents/git/WaveGuide/src/WaveGuide/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating cyw43_bus_pio_spi.pio.h"
	cd /home/leviathan/Documents/git/WaveGuide/src/WaveGuide/build/pico-sdk/src/rp2_common/cyw43_driver && ../../../../pioasm/pioasm -o c-sdk /home/leviathan/Documents/git/Pico_official/pico/pico-sdk/src/rp2_common/cyw43_driver/cyw43_bus_pio_spi.pio /home/leviathan/Documents/git/WaveGuide/src/WaveGuide/build/pico-sdk/src/rp2_common/cyw43_driver/cyw43_bus_pio_spi.pio.h

cyw43_driver_picow_cyw43_bus_pio_spi_pio_h: pico-sdk/src/rp2_common/cyw43_driver/CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h
cyw43_driver_picow_cyw43_bus_pio_spi_pio_h: pico-sdk/src/rp2_common/cyw43_driver/cyw43_bus_pio_spi.pio.h
cyw43_driver_picow_cyw43_bus_pio_spi_pio_h: pico-sdk/src/rp2_common/cyw43_driver/CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h.dir/build.make

.PHONY : cyw43_driver_picow_cyw43_bus_pio_spi_pio_h

# Rule to build all files generated by this target.
pico-sdk/src/rp2_common/cyw43_driver/CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h.dir/build: cyw43_driver_picow_cyw43_bus_pio_spi_pio_h

.PHONY : pico-sdk/src/rp2_common/cyw43_driver/CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h.dir/build

pico-sdk/src/rp2_common/cyw43_driver/CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h.dir/clean:
	cd /home/leviathan/Documents/git/WaveGuide/src/WaveGuide/build/pico-sdk/src/rp2_common/cyw43_driver && $(CMAKE_COMMAND) -P CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h.dir/cmake_clean.cmake
.PHONY : pico-sdk/src/rp2_common/cyw43_driver/CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h.dir/clean

pico-sdk/src/rp2_common/cyw43_driver/CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h.dir/depend:
	cd /home/leviathan/Documents/git/WaveGuide/src/WaveGuide/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leviathan/Documents/git/WaveGuide/src/WaveGuide /home/leviathan/Documents/git/Pico_official/pico/pico-sdk/src/rp2_common/cyw43_driver /home/leviathan/Documents/git/WaveGuide/src/WaveGuide/build /home/leviathan/Documents/git/WaveGuide/src/WaveGuide/build/pico-sdk/src/rp2_common/cyw43_driver /home/leviathan/Documents/git/WaveGuide/src/WaveGuide/build/pico-sdk/src/rp2_common/cyw43_driver/CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : pico-sdk/src/rp2_common/cyw43_driver/CMakeFiles/cyw43_driver_picow_cyw43_bus_pio_spi_pio_h.dir/depend


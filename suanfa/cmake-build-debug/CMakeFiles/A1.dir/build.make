# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhanglei061/src/c/suanfa

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhanglei061/src/c/suanfa/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/A1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A1.dir/flags.make

CMakeFiles/A1.dir/main.c.o: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhanglei061/src/c/suanfa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/A1.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/A1.dir/main.c.o   -c /Users/zhanglei061/src/c/suanfa/main.c

CMakeFiles/A1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/A1.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/zhanglei061/src/c/suanfa/main.c > CMakeFiles/A1.dir/main.c.i

CMakeFiles/A1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/A1.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/zhanglei061/src/c/suanfa/main.c -o CMakeFiles/A1.dir/main.c.s

# Object files for target A1
A1_OBJECTS = \
"CMakeFiles/A1.dir/main.c.o"

# External object files for target A1
A1_EXTERNAL_OBJECTS =

A1: CMakeFiles/A1.dir/main.c.o
A1: CMakeFiles/A1.dir/build.make
A1: CMakeFiles/A1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhanglei061/src/c/suanfa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable A1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/A1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A1.dir/build: A1

.PHONY : CMakeFiles/A1.dir/build

CMakeFiles/A1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/A1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/A1.dir/clean

CMakeFiles/A1.dir/depend:
	cd /Users/zhanglei061/src/c/suanfa/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhanglei061/src/c/suanfa /Users/zhanglei061/src/c/suanfa /Users/zhanglei061/src/c/suanfa/cmake-build-debug /Users/zhanglei061/src/c/suanfa/cmake-build-debug /Users/zhanglei061/src/c/suanfa/cmake-build-debug/CMakeFiles/A1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/A1.dir/depend

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
CMAKE_SOURCE_DIR = /home/csamak/Chinmay

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csamak/Chinmay/build

# Include any dependencies generated for this target.
include CMakeFiles/Q2_Reference_vs_Value.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Q2_Reference_vs_Value.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Q2_Reference_vs_Value.dir/flags.make

CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.o: CMakeFiles/Q2_Reference_vs_Value.dir/flags.make
CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.o: ../src/Q2_Reference_vs_Value.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csamak/Chinmay/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.o -c /home/csamak/Chinmay/src/Q2_Reference_vs_Value.cpp

CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csamak/Chinmay/src/Q2_Reference_vs_Value.cpp > CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.i

CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csamak/Chinmay/src/Q2_Reference_vs_Value.cpp -o CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.s

# Object files for target Q2_Reference_vs_Value
Q2_Reference_vs_Value_OBJECTS = \
"CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.o"

# External object files for target Q2_Reference_vs_Value
Q2_Reference_vs_Value_EXTERNAL_OBJECTS =

Q2_Reference_vs_Value: CMakeFiles/Q2_Reference_vs_Value.dir/src/Q2_Reference_vs_Value.cpp.o
Q2_Reference_vs_Value: CMakeFiles/Q2_Reference_vs_Value.dir/build.make
Q2_Reference_vs_Value: CMakeFiles/Q2_Reference_vs_Value.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/csamak/Chinmay/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Q2_Reference_vs_Value"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Q2_Reference_vs_Value.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Q2_Reference_vs_Value.dir/build: Q2_Reference_vs_Value

.PHONY : CMakeFiles/Q2_Reference_vs_Value.dir/build

CMakeFiles/Q2_Reference_vs_Value.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Q2_Reference_vs_Value.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Q2_Reference_vs_Value.dir/clean

CMakeFiles/Q2_Reference_vs_Value.dir/depend:
	cd /home/csamak/Chinmay/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csamak/Chinmay /home/csamak/Chinmay /home/csamak/Chinmay/build /home/csamak/Chinmay/build /home/csamak/Chinmay/build/CMakeFiles/Q2_Reference_vs_Value.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Q2_Reference_vs_Value.dir/depend


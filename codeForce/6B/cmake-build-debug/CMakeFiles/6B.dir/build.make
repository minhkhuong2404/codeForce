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
CMAKE_SOURCE_DIR = /Users/minhkhuonglu/CLionProjects/codeForce/6B

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/minhkhuonglu/CLionProjects/codeForce/6B/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/6B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/6B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/6B.dir/flags.make

CMakeFiles/6B.dir/main.cpp.o: CMakeFiles/6B.dir/flags.make
CMakeFiles/6B.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/minhkhuonglu/CLionProjects/codeForce/6B/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/6B.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/6B.dir/main.cpp.o -c /Users/minhkhuonglu/CLionProjects/codeForce/6B/main.cpp

CMakeFiles/6B.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/6B.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/minhkhuonglu/CLionProjects/codeForce/6B/main.cpp > CMakeFiles/6B.dir/main.cpp.i

CMakeFiles/6B.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/6B.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/minhkhuonglu/CLionProjects/codeForce/6B/main.cpp -o CMakeFiles/6B.dir/main.cpp.s

# Object files for target 6B
6B_OBJECTS = \
"CMakeFiles/6B.dir/main.cpp.o"

# External object files for target 6B
6B_EXTERNAL_OBJECTS =

6B: CMakeFiles/6B.dir/main.cpp.o
6B: CMakeFiles/6B.dir/build.make
6B: CMakeFiles/6B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/minhkhuonglu/CLionProjects/codeForce/6B/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 6B"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/6B.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/6B.dir/build: 6B

.PHONY : CMakeFiles/6B.dir/build

CMakeFiles/6B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/6B.dir/cmake_clean.cmake
.PHONY : CMakeFiles/6B.dir/clean

CMakeFiles/6B.dir/depend:
	cd /Users/minhkhuonglu/CLionProjects/codeForce/6B/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/minhkhuonglu/CLionProjects/codeForce/6B /Users/minhkhuonglu/CLionProjects/codeForce/6B /Users/minhkhuonglu/CLionProjects/codeForce/6B/cmake-build-debug /Users/minhkhuonglu/CLionProjects/codeForce/6B/cmake-build-debug /Users/minhkhuonglu/CLionProjects/codeForce/6B/cmake-build-debug/CMakeFiles/6B.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/6B.dir/depend


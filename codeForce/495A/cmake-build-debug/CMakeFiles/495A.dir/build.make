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
CMAKE_SOURCE_DIR = /Users/minhkhuonglu/CLionProjects/codeForce/495A

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/minhkhuonglu/CLionProjects/codeForce/495A/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/495A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/495A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/495A.dir/flags.make

CMakeFiles/495A.dir/main.cpp.o: CMakeFiles/495A.dir/flags.make
CMakeFiles/495A.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/minhkhuonglu/CLionProjects/codeForce/495A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/495A.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/495A.dir/main.cpp.o -c /Users/minhkhuonglu/CLionProjects/codeForce/495A/main.cpp

CMakeFiles/495A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/495A.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/minhkhuonglu/CLionProjects/codeForce/495A/main.cpp > CMakeFiles/495A.dir/main.cpp.i

CMakeFiles/495A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/495A.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/minhkhuonglu/CLionProjects/codeForce/495A/main.cpp -o CMakeFiles/495A.dir/main.cpp.s

# Object files for target 495A
495A_OBJECTS = \
"CMakeFiles/495A.dir/main.cpp.o"

# External object files for target 495A
495A_EXTERNAL_OBJECTS =

495A: CMakeFiles/495A.dir/main.cpp.o
495A: CMakeFiles/495A.dir/build.make
495A: CMakeFiles/495A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/minhkhuonglu/CLionProjects/codeForce/495A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 495A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/495A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/495A.dir/build: 495A

.PHONY : CMakeFiles/495A.dir/build

CMakeFiles/495A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/495A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/495A.dir/clean

CMakeFiles/495A.dir/depend:
	cd /Users/minhkhuonglu/CLionProjects/codeForce/495A/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/minhkhuonglu/CLionProjects/codeForce/495A /Users/minhkhuonglu/CLionProjects/codeForce/495A /Users/minhkhuonglu/CLionProjects/codeForce/495A/cmake-build-debug /Users/minhkhuonglu/CLionProjects/codeForce/495A/cmake-build-debug /Users/minhkhuonglu/CLionProjects/codeForce/495A/cmake-build-debug/CMakeFiles/495A.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/495A.dir/depend


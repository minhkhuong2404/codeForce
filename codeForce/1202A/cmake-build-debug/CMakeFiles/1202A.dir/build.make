# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /Users/minhkhuonglu/CLionProjects/codeForce/1202A

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/minhkhuonglu/CLionProjects/codeForce/1202A/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1202A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1202A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1202A.dir/flags.make

CMakeFiles/1202A.dir/main.cpp.o: CMakeFiles/1202A.dir/flags.make
CMakeFiles/1202A.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/minhkhuonglu/CLionProjects/codeForce/1202A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1202A.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1202A.dir/main.cpp.o -c /Users/minhkhuonglu/CLionProjects/codeForce/1202A/main.cpp

CMakeFiles/1202A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1202A.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/minhkhuonglu/CLionProjects/codeForce/1202A/main.cpp > CMakeFiles/1202A.dir/main.cpp.i

CMakeFiles/1202A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1202A.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/minhkhuonglu/CLionProjects/codeForce/1202A/main.cpp -o CMakeFiles/1202A.dir/main.cpp.s

# Object files for target 1202A
1202A_OBJECTS = \
"CMakeFiles/1202A.dir/main.cpp.o"

# External object files for target 1202A
1202A_EXTERNAL_OBJECTS =

1202A: CMakeFiles/1202A.dir/main.cpp.o
1202A: CMakeFiles/1202A.dir/build.make
1202A: CMakeFiles/1202A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/minhkhuonglu/CLionProjects/codeForce/1202A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1202A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1202A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1202A.dir/build: 1202A

.PHONY : CMakeFiles/1202A.dir/build

CMakeFiles/1202A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1202A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1202A.dir/clean

CMakeFiles/1202A.dir/depend:
	cd /Users/minhkhuonglu/CLionProjects/codeForce/1202A/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/minhkhuonglu/CLionProjects/codeForce/1202A /Users/minhkhuonglu/CLionProjects/codeForce/1202A /Users/minhkhuonglu/CLionProjects/codeForce/1202A/cmake-build-debug /Users/minhkhuonglu/CLionProjects/codeForce/1202A/cmake-build-debug /Users/minhkhuonglu/CLionProjects/codeForce/1202A/cmake-build-debug/CMakeFiles/1202A.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1202A.dir/depend


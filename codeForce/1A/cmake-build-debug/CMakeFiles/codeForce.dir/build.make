# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_SOURCE_DIR = /Users/minhkhuonglu/CLionProjects/codeForce

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/minhkhuonglu/CLionProjects/codeForce/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/codeForce.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/codeForce.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/codeForce.dir/flags.make

CMakeFiles/codeForce.dir/main.cpp.o: CMakeFiles/codeForce.dir/flags.make
CMakeFiles/codeForce.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/minhkhuonglu/CLionProjects/codeForce/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/codeForce.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/codeForce.dir/main.cpp.o -c /Users/minhkhuonglu/CLionProjects/codeForce/main.cpp

CMakeFiles/codeForce.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/codeForce.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/minhkhuonglu/CLionProjects/codeForce/main.cpp > CMakeFiles/codeForce.dir/main.cpp.i

CMakeFiles/codeForce.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/codeForce.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/minhkhuonglu/CLionProjects/codeForce/main.cpp -o CMakeFiles/codeForce.dir/main.cpp.s

# Object files for target codeForce
codeForce_OBJECTS = \
"CMakeFiles/codeForce.dir/main.cpp.o"

# External object files for target codeForce
codeForce_EXTERNAL_OBJECTS =

codeForce: CMakeFiles/codeForce.dir/main.cpp.o
codeForce: CMakeFiles/codeForce.dir/build.make
codeForce: CMakeFiles/codeForce.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/minhkhuonglu/CLionProjects/codeForce/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable codeForce"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/codeForce.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/codeForce.dir/build: codeForce

.PHONY : CMakeFiles/codeForce.dir/build

CMakeFiles/codeForce.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/codeForce.dir/cmake_clean.cmake
.PHONY : CMakeFiles/codeForce.dir/clean

CMakeFiles/codeForce.dir/depend:
	cd /Users/minhkhuonglu/CLionProjects/codeForce/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/minhkhuonglu/CLionProjects/codeForce /Users/minhkhuonglu/CLionProjects/codeForce /Users/minhkhuonglu/CLionProjects/codeForce/cmake-build-debug /Users/minhkhuonglu/CLionProjects/codeForce/cmake-build-debug /Users/minhkhuonglu/CLionProjects/codeForce/cmake-build-debug/CMakeFiles/codeForce.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/codeForce.dir/depend


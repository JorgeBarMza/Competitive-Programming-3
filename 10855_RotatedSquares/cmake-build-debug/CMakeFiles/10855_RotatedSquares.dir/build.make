# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/10855_RotatedSquares.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/10855_RotatedSquares.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/10855_RotatedSquares.dir/flags.make

CMakeFiles/10855_RotatedSquares.dir/main.cpp.o: CMakeFiles/10855_RotatedSquares.dir/flags.make
CMakeFiles/10855_RotatedSquares.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/10855_RotatedSquares.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/10855_RotatedSquares.dir/main.cpp.o -c "/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares/main.cpp"

CMakeFiles/10855_RotatedSquares.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/10855_RotatedSquares.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares/main.cpp" > CMakeFiles/10855_RotatedSquares.dir/main.cpp.i

CMakeFiles/10855_RotatedSquares.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/10855_RotatedSquares.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares/main.cpp" -o CMakeFiles/10855_RotatedSquares.dir/main.cpp.s

CMakeFiles/10855_RotatedSquares.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/10855_RotatedSquares.dir/main.cpp.o.requires

CMakeFiles/10855_RotatedSquares.dir/main.cpp.o.provides: CMakeFiles/10855_RotatedSquares.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/10855_RotatedSquares.dir/build.make CMakeFiles/10855_RotatedSquares.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/10855_RotatedSquares.dir/main.cpp.o.provides

CMakeFiles/10855_RotatedSquares.dir/main.cpp.o.provides.build: CMakeFiles/10855_RotatedSquares.dir/main.cpp.o


# Object files for target 10855_RotatedSquares
10855_RotatedSquares_OBJECTS = \
"CMakeFiles/10855_RotatedSquares.dir/main.cpp.o"

# External object files for target 10855_RotatedSquares
10855_RotatedSquares_EXTERNAL_OBJECTS =

10855_RotatedSquares: CMakeFiles/10855_RotatedSquares.dir/main.cpp.o
10855_RotatedSquares: CMakeFiles/10855_RotatedSquares.dir/build.make
10855_RotatedSquares: CMakeFiles/10855_RotatedSquares.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 10855_RotatedSquares"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/10855_RotatedSquares.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/10855_RotatedSquares.dir/build: 10855_RotatedSquares

.PHONY : CMakeFiles/10855_RotatedSquares.dir/build

CMakeFiles/10855_RotatedSquares.dir/requires: CMakeFiles/10855_RotatedSquares.dir/main.cpp.o.requires

.PHONY : CMakeFiles/10855_RotatedSquares.dir/requires

CMakeFiles/10855_RotatedSquares.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/10855_RotatedSquares.dir/cmake_clean.cmake
.PHONY : CMakeFiles/10855_RotatedSquares.dir/clean

CMakeFiles/10855_RotatedSquares.dir/depend:
	cd "/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares" "/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares" "/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares/cmake-build-debug" "/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares/cmake-build-debug" "/Users/jb/Documents/Technology/Competitive Programming/10855_RotatedSquares/cmake-build-debug/CMakeFiles/10855_RotatedSquares.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/10855_RotatedSquares.dir/depend


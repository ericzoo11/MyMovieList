# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = /Users/ericzhu/Documents/MyPProjects/movielist

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ericzhu/Documents/MyPProjects/movielist/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/movielist.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/movielist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/movielist.dir/flags.make

CMakeFiles/movielist.dir/main.c.o: CMakeFiles/movielist.dir/flags.make
CMakeFiles/movielist.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ericzhu/Documents/MyPProjects/movielist/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/movielist.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/movielist.dir/main.c.o   -c /Users/ericzhu/Documents/MyPProjects/movielist/main.c

CMakeFiles/movielist.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/movielist.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ericzhu/Documents/MyPProjects/movielist/main.c > CMakeFiles/movielist.dir/main.c.i

CMakeFiles/movielist.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/movielist.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ericzhu/Documents/MyPProjects/movielist/main.c -o CMakeFiles/movielist.dir/main.c.s

# Object files for target movielist
movielist_OBJECTS = \
"CMakeFiles/movielist.dir/main.c.o"

# External object files for target movielist
movielist_EXTERNAL_OBJECTS =

movielist: CMakeFiles/movielist.dir/main.c.o
movielist: CMakeFiles/movielist.dir/build.make
movielist: CMakeFiles/movielist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ericzhu/Documents/MyPProjects/movielist/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable movielist"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/movielist.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/movielist.dir/build: movielist

.PHONY : CMakeFiles/movielist.dir/build

CMakeFiles/movielist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/movielist.dir/cmake_clean.cmake
.PHONY : CMakeFiles/movielist.dir/clean

CMakeFiles/movielist.dir/depend:
	cd /Users/ericzhu/Documents/MyPProjects/movielist/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ericzhu/Documents/MyPProjects/movielist /Users/ericzhu/Documents/MyPProjects/movielist /Users/ericzhu/Documents/MyPProjects/movielist/cmake-build-debug /Users/ericzhu/Documents/MyPProjects/movielist/cmake-build-debug /Users/ericzhu/Documents/MyPProjects/movielist/cmake-build-debug/CMakeFiles/movielist.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/movielist.dir/depend

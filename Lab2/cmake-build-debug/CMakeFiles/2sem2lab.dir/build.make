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
CMAKE_SOURCE_DIR = "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/2sem2lab.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2sem2lab.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2sem2lab.dir/flags.make

CMakeFiles/2sem2lab.dir/main.cpp.o: CMakeFiles/2sem2lab.dir/flags.make
CMakeFiles/2sem2lab.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2sem2lab.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/2sem2lab.dir/main.cpp.o -c "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/main.cpp"

CMakeFiles/2sem2lab.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2sem2lab.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/main.cpp" > CMakeFiles/2sem2lab.dir/main.cpp.i

CMakeFiles/2sem2lab.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2sem2lab.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/main.cpp" -o CMakeFiles/2sem2lab.dir/main.cpp.s

CMakeFiles/2sem2lab.dir/polynome.cpp.o: CMakeFiles/2sem2lab.dir/flags.make
CMakeFiles/2sem2lab.dir/polynome.cpp.o: ../polynome.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/2sem2lab.dir/polynome.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/2sem2lab.dir/polynome.cpp.o -c "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/polynome.cpp"

CMakeFiles/2sem2lab.dir/polynome.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2sem2lab.dir/polynome.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/polynome.cpp" > CMakeFiles/2sem2lab.dir/polynome.cpp.i

CMakeFiles/2sem2lab.dir/polynome.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2sem2lab.dir/polynome.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/polynome.cpp" -o CMakeFiles/2sem2lab.dir/polynome.cpp.s

# Object files for target 2sem2lab
2sem2lab_OBJECTS = \
"CMakeFiles/2sem2lab.dir/main.cpp.o" \
"CMakeFiles/2sem2lab.dir/polynome.cpp.o"

# External object files for target 2sem2lab
2sem2lab_EXTERNAL_OBJECTS =

2sem2lab: CMakeFiles/2sem2lab.dir/main.cpp.o
2sem2lab: CMakeFiles/2sem2lab.dir/polynome.cpp.o
2sem2lab: CMakeFiles/2sem2lab.dir/build.make
2sem2lab: CMakeFiles/2sem2lab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 2sem2lab"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/2sem2lab.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2sem2lab.dir/build: 2sem2lab

.PHONY : CMakeFiles/2sem2lab.dir/build

CMakeFiles/2sem2lab.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/2sem2lab.dir/cmake_clean.cmake
.PHONY : CMakeFiles/2sem2lab.dir/clean

CMakeFiles/2sem2lab.dir/depend:
	cd "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab" "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab" "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/cmake-build-debug" "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/cmake-build-debug" "/Users/azamat/Documents/Programming/2 semester/Lab2/2sem2lab/cmake-build-debug/CMakeFiles/2sem2lab.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/2sem2lab.dir/depend


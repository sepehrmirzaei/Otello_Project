# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/sepehr007/Desktop/clion-2016.3.5/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/sepehr007/Desktop/clion-2016.3.5/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sepehr007/OtelloProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sepehr007/OtelloProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/OtelloProject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OtelloProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OtelloProject.dir/flags.make

CMakeFiles/OtelloProject.dir/main.cpp.o: CMakeFiles/OtelloProject.dir/flags.make
CMakeFiles/OtelloProject.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sepehr007/OtelloProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OtelloProject.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OtelloProject.dir/main.cpp.o -c /home/sepehr007/OtelloProject/main.cpp

CMakeFiles/OtelloProject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OtelloProject.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sepehr007/OtelloProject/main.cpp > CMakeFiles/OtelloProject.dir/main.cpp.i

CMakeFiles/OtelloProject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OtelloProject.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sepehr007/OtelloProject/main.cpp -o CMakeFiles/OtelloProject.dir/main.cpp.s

CMakeFiles/OtelloProject.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/OtelloProject.dir/main.cpp.o.requires

CMakeFiles/OtelloProject.dir/main.cpp.o.provides: CMakeFiles/OtelloProject.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/OtelloProject.dir/build.make CMakeFiles/OtelloProject.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/OtelloProject.dir/main.cpp.o.provides

CMakeFiles/OtelloProject.dir/main.cpp.o.provides.build: CMakeFiles/OtelloProject.dir/main.cpp.o


# Object files for target OtelloProject
OtelloProject_OBJECTS = \
"CMakeFiles/OtelloProject.dir/main.cpp.o"

# External object files for target OtelloProject
OtelloProject_EXTERNAL_OBJECTS =

OtelloProject: CMakeFiles/OtelloProject.dir/main.cpp.o
OtelloProject: CMakeFiles/OtelloProject.dir/build.make
OtelloProject: CMakeFiles/OtelloProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sepehr007/OtelloProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OtelloProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OtelloProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OtelloProject.dir/build: OtelloProject

.PHONY : CMakeFiles/OtelloProject.dir/build

CMakeFiles/OtelloProject.dir/requires: CMakeFiles/OtelloProject.dir/main.cpp.o.requires

.PHONY : CMakeFiles/OtelloProject.dir/requires

CMakeFiles/OtelloProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OtelloProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OtelloProject.dir/clean

CMakeFiles/OtelloProject.dir/depend:
	cd /home/sepehr007/OtelloProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sepehr007/OtelloProject /home/sepehr007/OtelloProject /home/sepehr007/OtelloProject/cmake-build-debug /home/sepehr007/OtelloProject/cmake-build-debug /home/sepehr007/OtelloProject/cmake-build-debug/CMakeFiles/OtelloProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OtelloProject.dir/depend


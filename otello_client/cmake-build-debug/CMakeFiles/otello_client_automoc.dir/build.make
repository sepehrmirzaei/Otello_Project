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
CMAKE_SOURCE_DIR = /home/sepehr007/OtelloProject/otello_client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sepehr007/OtelloProject/otello_client/cmake-build-debug

# Utility rule file for otello_client_automoc.

# Include the progress variables for this target.
include CMakeFiles/otello_client_automoc.dir/progress.make

CMakeFiles/otello_client_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sepehr007/OtelloProject/otello_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc for target otello_client"
	/home/sepehr007/Desktop/clion-2016.3.5/bin/cmake/bin/cmake -E cmake_autogen /home/sepehr007/OtelloProject/otello_client/cmake-build-debug/CMakeFiles/otello_client_automoc.dir/ Debug

otello_client_automoc: CMakeFiles/otello_client_automoc
otello_client_automoc: CMakeFiles/otello_client_automoc.dir/build.make

.PHONY : otello_client_automoc

# Rule to build all files generated by this target.
CMakeFiles/otello_client_automoc.dir/build: otello_client_automoc

.PHONY : CMakeFiles/otello_client_automoc.dir/build

CMakeFiles/otello_client_automoc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/otello_client_automoc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/otello_client_automoc.dir/clean

CMakeFiles/otello_client_automoc.dir/depend:
	cd /home/sepehr007/OtelloProject/otello_client/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sepehr007/OtelloProject/otello_client /home/sepehr007/OtelloProject/otello_client /home/sepehr007/OtelloProject/otello_client/cmake-build-debug /home/sepehr007/OtelloProject/otello_client/cmake-build-debug /home/sepehr007/OtelloProject/otello_client/cmake-build-debug/CMakeFiles/otello_client_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/otello_client_automoc.dir/depend

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
CMAKE_SOURCE_DIR = /mnt/f/ProgramLearning/CPP/Macros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/f/ProgramLearning/CPP/Macros/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/macrosExercise.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/macrosExercise.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/macrosExercise.dir/flags.make

CMakeFiles/macrosExercise.dir/macrosExercise.cpp.o: CMakeFiles/macrosExercise.dir/flags.make
CMakeFiles/macrosExercise.dir/macrosExercise.cpp.o: ../macrosExercise.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/f/ProgramLearning/CPP/Macros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/macrosExercise.dir/macrosExercise.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/macrosExercise.dir/macrosExercise.cpp.o -c /mnt/f/ProgramLearning/CPP/Macros/macrosExercise.cpp

CMakeFiles/macrosExercise.dir/macrosExercise.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/macrosExercise.dir/macrosExercise.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/f/ProgramLearning/CPP/Macros/macrosExercise.cpp > CMakeFiles/macrosExercise.dir/macrosExercise.cpp.i

CMakeFiles/macrosExercise.dir/macrosExercise.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/macrosExercise.dir/macrosExercise.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/f/ProgramLearning/CPP/Macros/macrosExercise.cpp -o CMakeFiles/macrosExercise.dir/macrosExercise.cpp.s

# Object files for target macrosExercise
macrosExercise_OBJECTS = \
"CMakeFiles/macrosExercise.dir/macrosExercise.cpp.o"

# External object files for target macrosExercise
macrosExercise_EXTERNAL_OBJECTS =

macrosExercise: CMakeFiles/macrosExercise.dir/macrosExercise.cpp.o
macrosExercise: CMakeFiles/macrosExercise.dir/build.make
macrosExercise: CMakeFiles/macrosExercise.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/f/ProgramLearning/CPP/Macros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable macrosExercise"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/macrosExercise.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/macrosExercise.dir/build: macrosExercise

.PHONY : CMakeFiles/macrosExercise.dir/build

CMakeFiles/macrosExercise.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/macrosExercise.dir/cmake_clean.cmake
.PHONY : CMakeFiles/macrosExercise.dir/clean

CMakeFiles/macrosExercise.dir/depend:
	cd /mnt/f/ProgramLearning/CPP/Macros/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/f/ProgramLearning/CPP/Macros /mnt/f/ProgramLearning/CPP/Macros /mnt/f/ProgramLearning/CPP/Macros/cmake-build-debug /mnt/f/ProgramLearning/CPP/Macros/cmake-build-debug /mnt/f/ProgramLearning/CPP/Macros/cmake-build-debug/CMakeFiles/macrosExercise.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/macrosExercise.dir/depend


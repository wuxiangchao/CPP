# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/cmake-3.24.2-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.24.2-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/f/ProgramLearning/CPP/Strings

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/f/ProgramLearning/CPP/Strings

# Include any dependencies generated for this target.
include CMakeFiles/string3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/string3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/string3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/string3.dir/flags.make

CMakeFiles/string3.dir/string3.cpp.o: CMakeFiles/string3.dir/flags.make
CMakeFiles/string3.dir/string3.cpp.o: string3.cpp
CMakeFiles/string3.dir/string3.cpp.o: CMakeFiles/string3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/f/ProgramLearning/CPP/Strings/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/string3.dir/string3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/string3.dir/string3.cpp.o -MF CMakeFiles/string3.dir/string3.cpp.o.d -o CMakeFiles/string3.dir/string3.cpp.o -c /mnt/f/ProgramLearning/CPP/Strings/string3.cpp

CMakeFiles/string3.dir/string3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/string3.dir/string3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/f/ProgramLearning/CPP/Strings/string3.cpp > CMakeFiles/string3.dir/string3.cpp.i

CMakeFiles/string3.dir/string3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/string3.dir/string3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/f/ProgramLearning/CPP/Strings/string3.cpp -o CMakeFiles/string3.dir/string3.cpp.s

# Object files for target string3
string3_OBJECTS = \
"CMakeFiles/string3.dir/string3.cpp.o"

# External object files for target string3
string3_EXTERNAL_OBJECTS =

string3: CMakeFiles/string3.dir/string3.cpp.o
string3: CMakeFiles/string3.dir/build.make
string3: CMakeFiles/string3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/f/ProgramLearning/CPP/Strings/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable string3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/string3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/string3.dir/build: string3
.PHONY : CMakeFiles/string3.dir/build

CMakeFiles/string3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/string3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/string3.dir/clean

CMakeFiles/string3.dir/depend:
	cd /mnt/f/ProgramLearning/CPP/Strings && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/f/ProgramLearning/CPP/Strings /mnt/f/ProgramLearning/CPP/Strings /mnt/f/ProgramLearning/CPP/Strings /mnt/f/ProgramLearning/CPP/Strings /mnt/f/ProgramLearning/CPP/Strings/CMakeFiles/string3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/string3.dir/depend


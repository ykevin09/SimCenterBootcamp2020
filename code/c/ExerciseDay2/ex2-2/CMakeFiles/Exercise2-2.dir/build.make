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
CMAKE_COMMAND = /opt/apps/cmake/3.16.1/bin/cmake

# The command to remove a file.
RM = /opt/apps/cmake/3.16.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2

# Include any dependencies generated for this target.
include CMakeFiles/Exercise2-2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Exercise2-2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exercise2-2.dir/flags.make

CMakeFiles/Exercise2-2.dir/exercise2-2.c.o: CMakeFiles/Exercise2-2.dir/flags.make
CMakeFiles/Exercise2-2.dir/exercise2-2.c.o: exercise2-2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Exercise2-2.dir/exercise2-2.c.o"
	/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Exercise2-2.dir/exercise2-2.c.o   -c /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2/exercise2-2.c

CMakeFiles/Exercise2-2.dir/exercise2-2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Exercise2-2.dir/exercise2-2.c.i"
	/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2/exercise2-2.c > CMakeFiles/Exercise2-2.dir/exercise2-2.c.i

CMakeFiles/Exercise2-2.dir/exercise2-2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Exercise2-2.dir/exercise2-2.c.s"
	/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2/exercise2-2.c -o CMakeFiles/Exercise2-2.dir/exercise2-2.c.s

CMakeFiles/Exercise2-2.dir/stresstransform.c.o: CMakeFiles/Exercise2-2.dir/flags.make
CMakeFiles/Exercise2-2.dir/stresstransform.c.o: stresstransform.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Exercise2-2.dir/stresstransform.c.o"
	/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Exercise2-2.dir/stresstransform.c.o   -c /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2/stresstransform.c

CMakeFiles/Exercise2-2.dir/stresstransform.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Exercise2-2.dir/stresstransform.c.i"
	/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2/stresstransform.c > CMakeFiles/Exercise2-2.dir/stresstransform.c.i

CMakeFiles/Exercise2-2.dir/stresstransform.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Exercise2-2.dir/stresstransform.c.s"
	/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2/stresstransform.c -o CMakeFiles/Exercise2-2.dir/stresstransform.c.s

# Object files for target Exercise2-2
Exercise2__2_OBJECTS = \
"CMakeFiles/Exercise2-2.dir/exercise2-2.c.o" \
"CMakeFiles/Exercise2-2.dir/stresstransform.c.o"

# External object files for target Exercise2-2
Exercise2__2_EXTERNAL_OBJECTS =

Exercise2-2: CMakeFiles/Exercise2-2.dir/exercise2-2.c.o
Exercise2-2: CMakeFiles/Exercise2-2.dir/stresstransform.c.o
Exercise2-2: CMakeFiles/Exercise2-2.dir/build.make
Exercise2-2: CMakeFiles/Exercise2-2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Exercise2-2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exercise2-2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exercise2-2.dir/build: Exercise2-2

.PHONY : CMakeFiles/Exercise2-2.dir/build

CMakeFiles/Exercise2-2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Exercise2-2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Exercise2-2.dir/clean

CMakeFiles/Exercise2-2.dir/depend:
	cd /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2 /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2 /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2 /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2 /home1/05605/yangm15/SimCenterBootcamp2020/code/c/ExerciseDay2/ex2-2/CMakeFiles/Exercise2-2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Exercise2-2.dir/depend


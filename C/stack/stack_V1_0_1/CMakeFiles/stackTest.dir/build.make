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
CMAKE_SOURCE_DIR = /home/ubuntu/Code/C/stack/stack_V1_0_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/Code/C/stack/stack_V1_0_1

# Include any dependencies generated for this target.
include CMakeFiles/stackTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stackTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stackTest.dir/flags.make

CMakeFiles/stackTest.dir/main.c.o: CMakeFiles/stackTest.dir/flags.make
CMakeFiles/stackTest.dir/main.c.o: main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/Code/C/stack/stack_V1_0_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/stackTest.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/stackTest.dir/main.c.o   -c /home/ubuntu/Code/C/stack/stack_V1_0_1/main.c

CMakeFiles/stackTest.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/stackTest.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/Code/C/stack/stack_V1_0_1/main.c > CMakeFiles/stackTest.dir/main.c.i

CMakeFiles/stackTest.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/stackTest.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/Code/C/stack/stack_V1_0_1/main.c -o CMakeFiles/stackTest.dir/main.c.s

CMakeFiles/stackTest.dir/stack.c.o: CMakeFiles/stackTest.dir/flags.make
CMakeFiles/stackTest.dir/stack.c.o: stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/Code/C/stack/stack_V1_0_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/stackTest.dir/stack.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/stackTest.dir/stack.c.o   -c /home/ubuntu/Code/C/stack/stack_V1_0_1/stack.c

CMakeFiles/stackTest.dir/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/stackTest.dir/stack.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/Code/C/stack/stack_V1_0_1/stack.c > CMakeFiles/stackTest.dir/stack.c.i

CMakeFiles/stackTest.dir/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/stackTest.dir/stack.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/Code/C/stack/stack_V1_0_1/stack.c -o CMakeFiles/stackTest.dir/stack.c.s

# Object files for target stackTest
stackTest_OBJECTS = \
"CMakeFiles/stackTest.dir/main.c.o" \
"CMakeFiles/stackTest.dir/stack.c.o"

# External object files for target stackTest
stackTest_EXTERNAL_OBJECTS =

stackTest: CMakeFiles/stackTest.dir/main.c.o
stackTest: CMakeFiles/stackTest.dir/stack.c.o
stackTest: CMakeFiles/stackTest.dir/build.make
stackTest: CMakeFiles/stackTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/Code/C/stack/stack_V1_0_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable stackTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stackTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stackTest.dir/build: stackTest

.PHONY : CMakeFiles/stackTest.dir/build

CMakeFiles/stackTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stackTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stackTest.dir/clean

CMakeFiles/stackTest.dir/depend:
	cd /home/ubuntu/Code/C/stack/stack_V1_0_1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/Code/C/stack/stack_V1_0_1 /home/ubuntu/Code/C/stack/stack_V1_0_1 /home/ubuntu/Code/C/stack/stack_V1_0_1 /home/ubuntu/Code/C/stack/stack_V1_0_1 /home/ubuntu/Code/C/stack/stack_V1_0_1/CMakeFiles/stackTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stackTest.dir/depend


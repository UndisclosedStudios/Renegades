# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\ir\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\ir\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\ir\Documents\Developpement\Undisclosed Studios\Game\Renegades"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\ir\Documents\Developpement\Undisclosed Studios\Game\Renegades\cmake-build-debug"

# Utility rule file for Renegades.

# Include the progress variables for this target.
include CMakeFiles\Renegades.dir\progress.make

CMakeFiles\Renegades:
	call E:/EpicGames/UE_4.24/Engine/Build/BatchFiles/Build.bat Renegades Win64 Development "-project=C:/Users/ir/Documents/Developpement/Undisclosed Studios/Game/Renegades/Renegades.uproject" -game -progress -buildscw

Renegades: CMakeFiles\Renegades
Renegades: CMakeFiles\Renegades.dir\build.make

.PHONY : Renegades

# Rule to build all files generated by this target.
CMakeFiles\Renegades.dir\build: Renegades

.PHONY : CMakeFiles\Renegades.dir\build

CMakeFiles\Renegades.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Renegades.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Renegades.dir\clean

CMakeFiles\Renegades.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\ir\Documents\Developpement\Undisclosed Studios\Game\Renegades" "C:\Users\ir\Documents\Developpement\Undisclosed Studios\Game\Renegades" "C:\Users\ir\Documents\Developpement\Undisclosed Studios\Game\Renegades\cmake-build-debug" "C:\Users\ir\Documents\Developpement\Undisclosed Studios\Game\Renegades\cmake-build-debug" "C:\Users\ir\Documents\Developpement\Undisclosed Studios\Game\Renegades\cmake-build-debug\CMakeFiles\Renegades.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\Renegades.dir\depend


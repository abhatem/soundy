# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/abo0ody/workspace/opencv/portaudio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/abo0ody/workspace/opencv/portaudio/build

# Include any dependencies generated for this target.
include CMakeFiles/TestColorTracker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TestColorTracker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestColorTracker.dir/flags.make

CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o: CMakeFiles/TestColorTracker.dir/flags.make
CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o: ../TestColorTracker.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/abo0ody/workspace/opencv/portaudio/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o -c /home/abo0ody/workspace/opencv/portaudio/TestColorTracker.cpp

CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/abo0ody/workspace/opencv/portaudio/TestColorTracker.cpp > CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.i

CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/abo0ody/workspace/opencv/portaudio/TestColorTracker.cpp -o CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.s

CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o.requires:
.PHONY : CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o.requires

CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o.provides: CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o.requires
	$(MAKE) -f CMakeFiles/TestColorTracker.dir/build.make CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o.provides.build
.PHONY : CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o.provides

CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o.provides.build: CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o

CMakeFiles/TestColorTracker.dir/colortracker.cpp.o: CMakeFiles/TestColorTracker.dir/flags.make
CMakeFiles/TestColorTracker.dir/colortracker.cpp.o: ../colortracker.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/abo0ody/workspace/opencv/portaudio/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/TestColorTracker.dir/colortracker.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/TestColorTracker.dir/colortracker.cpp.o -c /home/abo0ody/workspace/opencv/portaudio/colortracker.cpp

CMakeFiles/TestColorTracker.dir/colortracker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestColorTracker.dir/colortracker.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/abo0ody/workspace/opencv/portaudio/colortracker.cpp > CMakeFiles/TestColorTracker.dir/colortracker.cpp.i

CMakeFiles/TestColorTracker.dir/colortracker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestColorTracker.dir/colortracker.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/abo0ody/workspace/opencv/portaudio/colortracker.cpp -o CMakeFiles/TestColorTracker.dir/colortracker.cpp.s

CMakeFiles/TestColorTracker.dir/colortracker.cpp.o.requires:
.PHONY : CMakeFiles/TestColorTracker.dir/colortracker.cpp.o.requires

CMakeFiles/TestColorTracker.dir/colortracker.cpp.o.provides: CMakeFiles/TestColorTracker.dir/colortracker.cpp.o.requires
	$(MAKE) -f CMakeFiles/TestColorTracker.dir/build.make CMakeFiles/TestColorTracker.dir/colortracker.cpp.o.provides.build
.PHONY : CMakeFiles/TestColorTracker.dir/colortracker.cpp.o.provides

CMakeFiles/TestColorTracker.dir/colortracker.cpp.o.provides.build: CMakeFiles/TestColorTracker.dir/colortracker.cpp.o

# Object files for target TestColorTracker
TestColorTracker_OBJECTS = \
"CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o" \
"CMakeFiles/TestColorTracker.dir/colortracker.cpp.o"

# External object files for target TestColorTracker
TestColorTracker_EXTERNAL_OBJECTS =

TestColorTracker: CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o
TestColorTracker: CMakeFiles/TestColorTracker.dir/colortracker.cpp.o
TestColorTracker: CMakeFiles/TestColorTracker.dir/build.make
TestColorTracker: /usr/local/lib/libopencv_calib3d.so
TestColorTracker: /usr/local/lib/libopencv_contrib.so
TestColorTracker: /usr/local/lib/libopencv_core.so
TestColorTracker: /usr/local/lib/libopencv_features2d.so
TestColorTracker: /usr/local/lib/libopencv_flann.so
TestColorTracker: /usr/local/lib/libopencv_gpu.so
TestColorTracker: /usr/local/lib/libopencv_highgui.so
TestColorTracker: /usr/local/lib/libopencv_imgproc.so
TestColorTracker: /usr/local/lib/libopencv_legacy.so
TestColorTracker: /usr/local/lib/libopencv_ml.so
TestColorTracker: /usr/local/lib/libopencv_nonfree.so
TestColorTracker: /usr/local/lib/libopencv_objdetect.so
TestColorTracker: /usr/local/lib/libopencv_photo.so
TestColorTracker: /usr/local/lib/libopencv_stitching.so
TestColorTracker: /usr/local/lib/libopencv_superres.so
TestColorTracker: /usr/local/lib/libopencv_ts.so
TestColorTracker: /usr/local/lib/libopencv_video.so
TestColorTracker: /usr/local/lib/libopencv_videostab.so
TestColorTracker: CMakeFiles/TestColorTracker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable TestColorTracker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestColorTracker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestColorTracker.dir/build: TestColorTracker
.PHONY : CMakeFiles/TestColorTracker.dir/build

CMakeFiles/TestColorTracker.dir/requires: CMakeFiles/TestColorTracker.dir/TestColorTracker.cpp.o.requires
CMakeFiles/TestColorTracker.dir/requires: CMakeFiles/TestColorTracker.dir/colortracker.cpp.o.requires
.PHONY : CMakeFiles/TestColorTracker.dir/requires

CMakeFiles/TestColorTracker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestColorTracker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestColorTracker.dir/clean

CMakeFiles/TestColorTracker.dir/depend:
	cd /home/abo0ody/workspace/opencv/portaudio/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abo0ody/workspace/opencv/portaudio /home/abo0ody/workspace/opencv/portaudio /home/abo0ody/workspace/opencv/portaudio/build /home/abo0ody/workspace/opencv/portaudio/build /home/abo0ody/workspace/opencv/portaudio/build/CMakeFiles/TestColorTracker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TestColorTracker.dir/depend

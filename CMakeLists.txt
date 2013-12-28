cmake_minimum_required(VERSION 2.8)
project(soundy)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

find_package(OpenCV REQUIRED)
find_package(portaudio REQUIRED)
find_package(LibConfig REQUIRED)

set(CMAKE_CXX_FLAGS "-std=c++11 -g -Wall")
#set(LibConfig_FIND_QUIETLY FALSE)

IF(NOT PORTAUDIO_FOUND)
  MESSAGE(FATAL_ERROR "ERROR: portaudio not found on your system")
ENDIF(NOT PORTAUDIO_FOUND)

IF(NOT LIBCONFIG_FOUND)
  MESSAGE(FATAL_ERROR "ERROR: libconfig not found on your system")
ENDIF(NOT LIBCONFIG_FOUND)
set(LIBS ${PORTAUDIO_LIBRARIES} ${OpenCV_LIBS} ${LIBCONFIG_LIBRARIES})

add_executable(TestAudio audio.cpp TestAudio.cpp)
add_executable(TestColorTracker TestColorTracker.cpp colortracker.cpp)
add_executable(soundy app.cpp audio.cpp colortracker.cpp mainwindow.cpp configwindow.cpp configuration.cpp)
target_link_libraries(TestColorTracker ${LIBS})
target_link_libraries(TestAudio ${LIBS})
target_link_libraries(soundy ${LIBS})

install(TARGETS soundy DESTINATION bin)

#cmake_minimum_required(VERSION 3.22)
cmake_minimum_required(VERSION 3.16)
project(yolov5)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 14)
# set(OpenCV_DIR "/usr/local/opencv4.5.4/lib/cmake/opencv4")
find_package(OpenCV)

include_directories(yolo.h ${OpenCV_INCLUDE_DIRS})

add_executable(yolov5 yolo.cpp)

target_link_libraries(yolov5 ${OpenCV_LIBS})

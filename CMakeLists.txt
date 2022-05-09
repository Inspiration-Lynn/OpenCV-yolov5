cmake_minimum_required(VERSION 3.16)
project(yolov5)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV)

include_directories(${OpenCV_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR})
add_library(${PROJECT_NAME} SHARED yolo.cpp)

add_executable( main main.cpp )
target_link_libraries(main ${OpenCV_LIBS} ${PROJECT_NAME} )

# target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

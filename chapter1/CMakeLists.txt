cmake_minimum_required(VERSION 2.8)
project( play_video )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( play_video play_video.cpp )
target_link_libraries( play_video ${OpenCV_LIBS} )

cmake_minimum_required(VERSION 3.6)

project(NN)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")


set(SOURCE_FILES main.cpp)
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)

add_executable(ZPR_NN ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(src/GUI)



target_link_libraries(ZPR_NN src)
target_link_libraries(ZPR_NN GUI)

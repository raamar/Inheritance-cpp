cmake_minimum_required(VERSION 3.10)
project(inheritance-cpp)

add_subdirectory(include)
add_subdirectory(src)

add_executable(inheritance_cpp ${SOURCES} ${HEADERS})

target_include_directories(inheritance_cpp PRIVATE include)
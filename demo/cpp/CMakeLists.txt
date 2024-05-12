
cmake_minimum_required (VERSION 3.8)

project ("tianzuo.LianYaoTest")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options("-g")

file(GLOB_RECURSE SOURCES "*.cpp")
add_executable (${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} tianzuo.LianYao)

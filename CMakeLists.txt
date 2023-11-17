cmake_minimum_required(VERSION 3.9)

project(quickjs_bench LANGUAGES C)

add_subdirectory(quickjs)
link_libraries(qjs)

add_executable(quickjs_bench run_sunspider.c)
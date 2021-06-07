cmake_minimum_required(VERSION 3.17)
project(indie)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake_modules/")

find_package(raylib REQUIRED)

file(GLOB_RECURSE SRC src/**/*.cpp)
file(GLOB_RECURSE TEST tests/*.cpp)

if (MSVC)
    add_compile_options(/W4)
else ()
    add_compile_options(-Wall -Wextra -Wshadow -Wno-narrowing)
endif ()

add_executable(bomberman ${SRC} src/main.cpp)
add_executable(unit_tests ${SRC} ${TEST} tests/OSRedirector.hpp)

macro (HEADER_DIRECTORIES ret_l)
    file(GLOB_RECURSE nw_l src/**/*.hpp)
    set(dir_list "")
    foreach (file_path ${nw_l})
        get_filename_component(dir_path ${file_path} PATH)
        set(dir_list ${dir_list} ${dir_path})
    endforeach ()
    list(REMOVE_DUPLICATES dir_list)
    set(${ret_l} ${dir_list})
endmacro ()

HEADER_DIRECTORIES(INC)

target_link_libraries(bomberman raylib)
target_include_directories(bomberman PUBLIC ${raylib_SOURCE_DIR}/src ${INC})

target_link_libraries(unit_tests raylib criterion -lgcov)
target_include_directories(unit_tests PUBLIC -fprofile-arcs -ftest-coverage)

target_include_directories(bomberman PUBLIC ${raylib_SOURCE_DIR}/src ${INC})
target_include_directories(unit_tests PUBLIC ${raylib_SOURCE_DIR}/src ${INC})
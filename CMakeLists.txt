cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 17)
project(ide)

add_compile_options(-Wall)
add_link_options(-ldl -pthread)

include_directories(raylib/lib)
include_directories(raylib/include)
include_directories(src)

add_executable(ide
        src/main.cpp
        src/WindowConstants.hpp
        src/parser/TextHandler.cpp
        src/parser/TextHandler.hpp
        src/RuleOfFive.hpp
        src/file_system/FileEditor.hpp
        src/file_system/FileEditor.cpp
        src/file_system/Logger.hpp
        src/file_system/Logger.cpp
        src/world/WorldGenerator.cpp
        src/world/WorldGenerator.hpp
        src/world/WorldMap.cpp
        src/world/WorldMap.hpp)


target_link_libraries(ide PUBLIC ${CMAKE_SOURCE_DIR}/raylib/lib/libraylib.a)
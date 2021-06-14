cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

project(cpp_game)

file(GLOB SOURCES "src/*.cpp")

add_executable(game ${SOURCES})
target_include_directories(game PUBLIC "src/include")
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

set(PROJECT_NAME password_quiz)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

project(${PROJECT_NAME})

add_executable(
  ${PROJECT_NAME}
  src/Game.hpp
  src/Game.cpp
  src/Main.cpp
  src/Utils.hpp
  src/Utils.cpp
)

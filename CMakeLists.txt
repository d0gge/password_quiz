cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

set(PROJECT_NAME password_quiz)

project(${PROJECT_NAME})

add_executable(
  ${PROJECT_NAME}
  src/Game.hpp
  src/Game.hpp
  src/Main.cpp
  src/Utils.hpp
  src/Utils.cpp
)

cmake_minimum_required(VERSION 2.8)
project(diff_fold)
include_directories("./client_server")
file(GLOB SOURCES  "ser.c" )
add_executable(ser ${SOURCES})
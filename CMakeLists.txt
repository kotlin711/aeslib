cmake_minimum_required(VERSION 3.20)
project(tglib)

set(CMAKE_CXX_STANDARD 11)

add_library(tglib  SHARED library.cc aes.c base64.c)

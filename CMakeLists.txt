cmake_minimum_required(VERSION 3.27)
project(praticas1_APC_ENGMNA C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(praticas)

add_executable(praticas1_APC_ENGMNA
        praticas/questao01.c)

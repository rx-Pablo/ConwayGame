cmake_minimum_required(VERSION 3.29)
project(ConwayGame C)

set(CMAKE_C_STANDARD 11)

include_directories(libs)

add_executable(ConwayGame
    libs/funciones.c
    libs/funciones.h
    main/main.c)

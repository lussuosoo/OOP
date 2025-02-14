
cmake_minimum_required(VERSION 3.10)


project(MyProject)


set(CMAKE_CXX_STANDARD 11)


set(SOURCES
    main.cpp
    utils.cpp
)


add_executable(my_program ${SOURCES})

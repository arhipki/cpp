cmake_minimum_required(VERSION 3.30); 
# всё слизал с шаблона
project ( 
    Fibonacci
    VERSION 0.0.1
    DESCRIPTION "числа Фибоначчи через цикл for"
    LANGUAGES CXX
)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Release)

add_executable(Fibonacci)

set(sources
    main.cpp
)

target_sources(Fibonacci PRIVATE ${sources})
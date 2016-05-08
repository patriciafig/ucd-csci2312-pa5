cmake_minimum_required(VERSION 3.5)
project(ucd_csci2312_pa5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    CMakeLists.txt
    custom_iterator.h
    ErrorContext.cpp
    ErrorContext.h
    less_functor.h
    main.cpp
    README.md
    TemplateTests.cpp
    TemplateTests.h)

add_executable(ucd_csci2312_pa5 ${SOURCE_FILES})
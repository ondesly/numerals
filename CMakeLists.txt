#
#  CMakeLists.txt
#  numerals
#
#  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 01.12.2020.
#  Copyright © 2020 Dmitrii Torkhov. All rights reserved.
#

cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(numerals 
    VERSION 0.1
    LANGUAGES CXX)

#

add_library(numerals INTERFACE)

target_include_directories(numerals INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
    $<INSTALL_INTERFACE:include>)


#

set(PUBLIC_HEADERS 
    include/numerals/vector2.h
    include/numerals/vector2.inl
    include/numerals/vector3.h
    include/numerals/vector3.inl
    include/numerals/vector4.h
    include/numerals/vector4.inl)

install(TARGETS numerals
        EXPORT numerals-config
        INCLUDES DESTINATION include)

install(FILES ${PUBLIC_HEADERS} DESTINATION include/numerals)

install(EXPORT numerals-config DESTINATION lib/cmake/numerals)
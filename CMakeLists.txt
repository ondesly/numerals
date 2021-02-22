#
#  CMakeLists.txt
#  vectors
#
#  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 01.12.2020.
#  Copyright © 2020-2021 Dmitrii Torkhov. All rights reserved.
#

cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(vectors
        VERSION 0.1
        LANGUAGES CXX)

#

add_library(vectors INTERFACE)

add_library(oo::vectors ALIAS vectors)

target_include_directories(vectors INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:include>)

#

set(PUBLIC_HEADERS
        include/vectors/vec2.h
        include/vectors/vec2.inl
        include/vectors/vec3.h
        include/vectors/vec3.inl
        include/vectors/vec4.h
        include/vectors/vec4.inl)

install(TARGETS vectors
        EXPORT vectors-config
        INCLUDES DESTINATION include)

install(FILES ${PUBLIC_HEADERS} DESTINATION include/vectors)

install(EXPORT vectors-config DESTINATION lib/cmake/vectors)

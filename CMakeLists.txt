#
#  CMakeLists.txt
#  vectors
#
#  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 01.12.2020.
#  Copyright © 2020-2021 Dmitrii Torkhov. All rights reserved.
#

cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(vectors
        VERSION 1.2.0
        LANGUAGES CXX)

#########
# Build #
#########

add_library(vectors INTERFACE)

#

set(INCLUDE_DIR ${CMAKE_CURRENT_LIST_DIR}/include)

set(PUBLIC_HEADERS
        ${INCLUDE_DIR}/vectors/vec2.h
        ${INCLUDE_DIR}/vectors/vec2.inl
        ${INCLUDE_DIR}/vectors/vec3.h
        ${INCLUDE_DIR}/vectors/vec3.inl
        ${INCLUDE_DIR}/vectors/vec4.h
        ${INCLUDE_DIR}/vectors/vec4.inl)

target_include_directories(vectors INTERFACE $<BUILD_INTERFACE:${INCLUDE_DIR}> $<INSTALL_INTERFACE:include>)

###########
# Install #
###########

include(GNUInstallDirs)

install(TARGETS ${PROJECT_NAME}
        EXPORT ${PROJECT_NAME}-config
        INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}${INSTALL_SUFFIX}/${PROJECT_NAME})

install(FILES ${PUBLIC_HEADERS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}${INSTALL_SUFFIX}/${PROJECT_NAME})

install(EXPORT ${PROJECT_NAME}-config DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME})

###########
# Testing #
###########

enable_testing()

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif ()
#
#  CMakeLists.txt
#  vectors
#
#  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 22.02.2021.
#  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
#

project(tests)

# TestVec2

add_executable(test_vec2 test_vec2.cpp)

set_target_properties(test_vec2 PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO)

target_link_libraries(test_vec2 PRIVATE oo::vectors)

add_test(NAME TestVec2 COMMAND test_vec2)

# TestVec3

add_executable(test_vec3 test_vec3.cpp)

set_target_properties(test_vec3 PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO)

target_link_libraries(test_vec3 PRIVATE oo::vectors)

add_test(NAME TestVec3 COMMAND test_vec3)

# TestVec4

add_executable(test_vec4 test_vec4.cpp)

set_target_properties(test_vec4 PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO)

target_link_libraries(test_vec4 PRIVATE oo::vectors)

add_test(NAME TestVec4 COMMAND test_vec4)
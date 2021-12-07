cmake_minimum_required(VERSION 3.22.0)

set(This Tests)

set(Sources
    Tests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    my_project
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
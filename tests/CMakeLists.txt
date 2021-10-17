add_executable(example example.cpp)
target_link_libraries(example PRIVATE test-conan fmt::fmt Boost::unit_test_framework)

add_test(example example)

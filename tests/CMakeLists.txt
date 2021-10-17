add_executable(example example.cpp)
# I noticed a list of Boost::XYZ packages in the CLion messages window and noticed how
# the unit_test_framework is being spelled as Boost:: with capital "B"
target_link_libraries(example PRIVATE test-conan fmt::fmt Boost::unit_test_framework)

add_test(example example)

cmake_minimum_required(VERSION 3.20)
project(test-conan CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

find_package(Boost 1.69.0 REQUIRED)
find_package(fmt REQUIRED)
find_package(libffi REQUIRED)
find_library(BFD_LIBRARY NAMES bfd REQUIRED)

add_library(test-conan SHARED src/test-conan.cpp)
target_link_libraries(test-conan PRIVATE fmt::fmt libffi::libffi)
target_include_directories(test-conan INTERFACE src/)

add_subdirectory(tests)

set_target_properties(test-conan PROPERTIES PUBLIC_HEADER "src/test-conan.h")
install(TARGETS test-conan DESTINATION "."
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )

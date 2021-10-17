#pragma once

#ifdef WIN32
  #define test_conan_EXPORT __declspec(dllexport)
#else
  #define test_conan_EXPORT
#endif

test_conan_EXPORT void test_conan();

# conan instructions

1. conan new test-conan/0.1 --template=cmake_lib
2. conan install --profile default-abi11 ../conanfile.txt\
my profiles are: \
-> conan profile list
   * default
   * default-abi11
3. Use -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake

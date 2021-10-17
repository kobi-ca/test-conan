//
// Created by kobi on 10/16/21.
//

#define BOOST_TEST_MAIN
#include "boost/test/unit_test.hpp"

#include "fmt/format.h"
#include "test-conan.h"

BOOST_AUTO_TEST_CASE( my_test )
{
    test_conan();
    fmt::print("hello world\n");
    BOOST_CHECK( true);
}

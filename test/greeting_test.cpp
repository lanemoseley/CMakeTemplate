// Creates a stub for the test module initialization (the main entry part) and
// defines the name of the master test suite.
#define BOOST_TEST_MODULE GreetingTest

#include "shared/greeting.h"
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(GreetingTest1) {
  Greeting greeting;
  BOOST_CHECK_EQUAL("Hello, world!", greeting.getGreetingFromFile());
}

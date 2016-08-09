#include <boost/test/unit_test.hpp>
#include "my_functions.h"

BOOST_AUTO_TEST_CASE(add_works)
{
  BOOST_CHECK(add(1, 1) == 2);
  BOOST_CHECK(add(1, 2) == 3);
  BOOST_CHECK(add(1, 3) == 4);
  BOOST_CHECK(add(1, 4) == 5);
}

#include <cmath>

BOOST_AUTO_TEST_CASE(divide_use)
{
  {
    const double measured = divide(1.0, 1.0);
    const double expected = 1.0;
    const double error = std::abs(measured - expected);
    const double tolerance = 0.01;
    BOOST_CHECK(error < tolerance);
  }
  {
    const double measured = divide(1.0, 2.0);
    const double expected = 0.5;
    const double error = std::abs(measured - expected);
    const double tolerance = 0.01;
    BOOST_CHECK(error < tolerance);
  }
}

BOOST_AUTO_TEST_CASE(divide_abuse)
{
  try
  {
    divide(0.0, 0.0);
    BOOST_CHECK(!"Should not get here");
  }
  catch (std::invalid_argument& e)
  {
    const std::string expected = "divide: denominator cannot be zero";
    BOOST_CHECK(e.what() == expected);

  }
}

#include "my_functions.h"

int add(const int i, const int j)
{
  return i + j;
}

#include <stdexcept>

double divide(const double n, const double d)
{
  if (d == 0.0)
  {
    throw std::invalid_argument(
      "divide: denominator cannot be zero"
    );
  }
  return n / d;
}

#include <iostream>

int factorial(const int i) noexcept
{
  return i * factorial(i - 1);
}

int main()
{
  std::cout << factorial(8);
}

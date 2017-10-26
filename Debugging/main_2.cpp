#include <iostream>

int divide(const int a, const int b)
{
  return a / b;
}

int main()
{
  for (int i=0; i!=100; ++i)
  {
    const int x = std::rand() % 10;
    const int y = std::rand() % 10;
    std::cout << divide(x, y) << '\n';
  }
  return 0;
}


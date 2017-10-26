#include <cassert>

//Put the value 'i' at the address the pointer 'p' points to
void set_int(int* const p, const int i)
{
  *p = i;
}

int main()
{
  int a{}; //C++11 default initialization
  set_int(&a, 10);
  assert(a == 10);

  int* b{}; //C++11 default initialization
  set_int(b, 10);
  assert(*b == 10);
}


#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
  int a; // goes on stack
  int *p;
  p = new int;
  *p = 10;
  std::cout << "*p: " << *p << " p: " << p << std::endl;
  delete p;
  p = new int[20];
  delete[] p;
}

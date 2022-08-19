#include <stdio.h>

int main() {
  int a;
  int *P;

  P = &a;
  a = 5;

  printf("The value of a is %d and the value of P is %p\n", a, P);
  printf("A pointer to P: %p\n", P);

  *P = 8; // changed the value of a
  printf("The new value of a is %d", a);
  return 0;
}

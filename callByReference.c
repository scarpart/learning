#include <stdio.h>

int IncrementByValue(int a) {
  a = a + 1;
  printf("Address of variable a in increment by value = %d\n", &a);
}

int IncrementByReference(int *a) {
  a = a + 1;
  printf("Address of variable a in increment by reference = %d\n", &a);
}

int main () {
  int a = 10;
  IncrementByValue(a);
  IncrementByReference(a);

  printf("a = %d", a);
  return 0;
}

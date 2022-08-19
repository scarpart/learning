#include <stdio.h>

int main() {
  int a = 10;
  int *p;
  p = &a;

  // Pointer arithmetic
  printf("%d\n", p); // p is 2002, for example
  printf("value at address p is %d\n", *p);
  printf("The size of an integer value %d bytes\n", sizeof(int));
  printf("%d\n", p+1); // p+1 is 2006
  printf("value at address p+1 is %d\n", *(p+1));
}

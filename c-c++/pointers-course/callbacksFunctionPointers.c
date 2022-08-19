#include <stdio.h>

void A() {
  printf("Hello.\n");
}

void B(void (*ptr)()) { // function pointer as argument
  ptr(); //call-back function that "ptr" points to
}

int main() {
  void (*p)() = &A;
  B(p);
  // is the same as...
  B(A);
  // is the same as...
  B(&A);
  return 0;
}

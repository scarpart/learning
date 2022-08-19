#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld() {
  printf("Hello World!\n");
}

int *Add(int* a, int* b) {
  int* c = (int*)malloc(sizeof(int));
  *c = (*a) + (*b);
  return c;
}

int main() {
  int a = 2, b = 4;
  int *ptr = Add(&a, &b);
  
  // it works here because the pointer c was allocated in the heap
  PrintHelloWorld();
  printf("Sum of a and b = %d\n", *ptr);
  
  return 0;
}

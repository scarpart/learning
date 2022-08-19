#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld() {
  printf("Hello World!\n");
}

int *Add(int *a, int *b) {
  int c = (*a) + (*b);
  return &c;
}

int main() {
  int a = 2, b = 4;
  int *ptr = Add(&a, &b);
  PrintHelloWorld();
  
  // because the stack memory where ptr points to
  // was dealocated after the end of Add() and a new 
  // function received its call stack, *ptr will return
  // a garbage value.
  printf("Sum of a and b = %d\n", *ptr);
  
  return 0;
}

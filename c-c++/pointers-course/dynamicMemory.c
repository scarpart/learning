#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a; // goes on stack
  int *p;
  p = (int*)malloc(sizeof(int));
  *p = 10;
  printf("address of *p in the heap: %d\n", &*p);
  printf("value of *p in the heap: %d\n", *p);
  free(p);
  
  p = (int*)malloc(sizeof(int));
  *p = 20;
  printf("address of *p in the heap: %d\n", &*p);
  printf("value of *p in the heap: %d\n", *p);
  free(p);

  return 0;
}

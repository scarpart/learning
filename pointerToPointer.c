#include <stdio.h>

int main () {
  int x = 5;
  int *p;
  int **q;

  p = &x;
  q = &p;

  printf("The value of p is %d and *p is %d\n", p, *p);
  printf("The value of q is %d and *q is %d\n", q, *q);

  return 0;
}

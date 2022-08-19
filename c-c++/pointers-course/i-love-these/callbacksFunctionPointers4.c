#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b) {
  int A = *((int*)a); // typecasting and getting the value
  int B = *((int*)b);

  return A-B;
}

int main() {
  int i, array[] = {-31, 22, -1, 50, -6, 4};
  qsort(array, 6, sizeof(int), compare);
  for (i = 0; i < 6; i++) printf("%d ", array[i]);
  printf("\n");
  return 0;
}

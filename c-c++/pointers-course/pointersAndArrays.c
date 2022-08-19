#include <stdio.h>

int main() {
  int array[] = {2, 4, 5, 8, 1};
  printf("array = %d\n", array);
  printf("&array[0] = %d\n", &array[0]);
  printf("array[0] = %d\n", array[0]);
  printf("*array =%d\n", *array);
  printf("array+1 = %d\n", array+1);

  return 0;
}

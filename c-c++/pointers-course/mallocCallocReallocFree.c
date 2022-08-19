#include <stdio.h>
#include <stdlib.h>

// malloc = void* malloc(sizeOfArray*sizeof(type))
// calloc = void* calloc(size_t num, size_t size)
//        => int *p = (int*)calloc(3, sizeof(int))
// malloc does not initialize the value, calloc sets all positions with 0.
// realloc = void* realloc(void* Ptr, size_t size)

int main()
{
  int n;
  printf("Enter the size of array\n");
  scanf("%d", &n);
  int *array = (int*)malloc(n*sizeof(int));

  for (int i = 0; i < n; i++) {
    array[i] = i+1;
  }

  int *newArray = (int*)realloc(array, 2*n*sizeof(int));
  for (int i = 0; i < 2*n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");


  return 0;
}

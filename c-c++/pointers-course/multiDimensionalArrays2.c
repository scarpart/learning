#include <stdio.h>

void PrintAll(int (*A)[2][2], int n)
{
  int i = 0;
  while (i < (n*2*2))
  {
    printf("%d ", *(*(*A)+i));
    i++;
  }
  printf("\n");
}

int main ()
{
  // C[i][j][k] = *(*(*(C + i) + j) + k)
  int C[3][2][2] = {{{2, 5}, {7, 9}},
                    {{3, 4}, {6, 1}},
                    {{0, 8}, {11, 13}}};

  int n = sizeof(C)/sizeof(C[0]);
  printf("size of C: %d\n", n);
  printf("*(A): %d, A: %d\n", *(C), C);
  printf("*(A+1): %d\n", *(C+1));
  printf("*(A+11): %d\n", *(C+11));
  printf("**(A): %d\n", *(*C));
  printf("***(A): %d\n", *(*(*C)));
  PrintAll(C, n);
  return 0;
} 

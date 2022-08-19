#include <stdio.h>
#include <string.h>

void Print(const char *C)
{
  C[0] = 'A' // this will give a compilation error
             // reason being *C is constant. 
             // if it weren't, it would be possible to modify
             // the string in this case.
  while (*C != '\0')
    {
      printf("%c", *C);
      C++;
    }
    printf("\n");
}

int main()
{
  char C[20] = "man, bigman co.";
  Print(C);
}

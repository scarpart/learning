#include <stdio.h>
#include <string.h>

int main()
{
  // size of string array must be bigger than the string by one
  // this is because of the \0 null character

  char C[20] = "John.";
  int len0 = strlen(C);
  int len1 = sizeof(C)/sizeof(C[0]);

  printf("String array, without \\0: %s\n", C);
  printf("Length of array: %d\n", len1);
  C[5] = '\0';
  printf("String array, with \\0: %s\n", C);
  int len2 = sizeof(C)/sizeof(C[0]);
  printf("Length of array: %d\n", len2);

  return 0;
}

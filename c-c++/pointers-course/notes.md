### Pointers in C/C++

pointer - variable that store the address of another variable

declaring a pointer:
```c
int a;
int *P;
P = &a; // P now points to a

// assuming that a is in 0x204 and P is in 0x064
a = 5;
printf(P); // prints 204
printf(&a); // prints 204
printf(&P); // prints 64
printf(*P); // prints 5
*P = 8;
printf(a) // prints 8
```

&a - gives the address of a
\*a - returns the value stored in the address of a
  |--> this is called dereferencing!

- Multi-Dimensional Arrays and Pointers

```c
B[i][j] = *(B[i] + j)
        = *(*(B+i) + j)
```

- Dynamic Memory Allocation

If malloc() is not able to find memory on the heap, it returns null.
this is important for error handling.
let's see if i got this right. Them's the facts:
p = new int; (CPP)
p = (int*)malloc(sizeof(int)); (C)

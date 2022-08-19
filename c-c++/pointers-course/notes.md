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


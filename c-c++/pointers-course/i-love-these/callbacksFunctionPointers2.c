#include <stdio.h>

int compare(int a, int b) {
  if (a > b) {return 1;}
  if (a < b) {return -1;}
  return 0;
}

// callback function should compare two integers, should return 1
// if first element has higher rank, 0 if elements are equal and -1 if
// second element has a higher rank
void BubbleSort(int A[], int n, int (*compare)(int, int)) {
  // simple bubble sort (bad algo, O(n²))
  int i, j, temp;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n-1; j++) {
      if (compare(A[j], A[j+1]) > 0) { // compare A[j] with A[j+1] and SWAP if needed 
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }
}

int main() {
  int array[] = {3, 2, 1, 5, 6, 4}; // need to sort in increasing order.
  int n = sizeof(array)/sizeof(array[0]);
  BubbleSort(array, n, compare);
  for (int i = 0; i < n; i++) { printf("%d", array[i]); }
  printf("\n");
  return 0;
}

#include <stdio.h>
#include <math.h>

int compare(int a, int b) {
  if (a > b) return 1;
  if (a < b) return -1;
  return 0;
}

int absoluteComparison(int a, int b) {
  if (abs(a) > abs(b)) return 1;
  if (abs(a) < abs(b)) return -1;
  return 0;
}

void BubbleSort(int A[], int n, int (*compare)(int, int)) {
  int i, j, temp;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n-1; j++) {
      if (compare(A[j], A[j+1]) > 0) {
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }
}

int main() {
  int i, array[] = {-31, 22, -1, 50, -6, 4};
  BubbleSort(array, 6, absoluteComparison);
  for (i = 0; i < 6; i++) printf("%d ", array[i]);
  return 0;
}

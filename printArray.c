#include <stdio.h>

void printArray (int n, int v[]) {
  int i = 0;
  while (i < n) {
    printf("%d ", v[i]);
    i = i + 1;
  }
  printf("\n");
}
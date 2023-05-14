#include "layout/function_01.c"
#include "layout/exercise_01.c"
#include "printArray.c"
#include <stdio.h>

int main () {
  int v[] = { 1, 2, 2, 3, 4, 5, 6, 7, 7, 7, 8, 9, 10, 10, 10, 10, 10, 0, 10 };
  int n = 19;

  printArray(n, v);
  printf("i = %d \n", scmax(v, n));

  return 0;
}
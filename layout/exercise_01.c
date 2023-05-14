#include <stdio.h>

/* A.3.3 */
int separa (int v[], int p, int r) {
  int c, i, j, t;
  c = v[p];
  i = p + 1;
  j = r;
  while (i <= j) {
    if (v[i] < c) {
      v[i-1] = v[i];
      i = i + 1;
    }
    else {
      t = v[i];
      v[i] = v[j];
      v[j] = t;
      j = j - 1;
    }
  }
  v[j] = c;
  return j;
}

/* A.3.4 */
int BinarySearch (int R[], int N, int X) {
  int esq, dir, i, comp = 0;
  esq = 0;
  dir = N - 1;
  i = (esq + dir) / 2;  /* indice do meio de R[] */
  while (esq <= dir && R[i] != X) {
    if (R[i] < X)  esq = i + 1;
    else  dir = i - 1;
    i = (esq + dir) / 2;  /* novo indice do meio de R[] */
    comp = comp + 1;
  }

  printf("total comps = %d \n", comp);
  
  return i;
}
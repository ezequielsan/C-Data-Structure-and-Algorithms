/* 1.1.1 */

/* A função sum recebe um inteiro n >= 1 e um vetor v e
 * devolve o valor da soma de todos os elementos de v[0..n-1]. */
int sum (int n, int v[]) {
  int i, x = 0;
  for (i = 0; i < n; i++) x += v[i];
  return x;
}

/* 1.1.2 */

/* A função where recebe um inteiro x, um inteiro n >= 1 
 * e um vetor v e devolve o indice de x em v[0..n-1] caso 
 * x pertença a v e n caso contrário. */
int where (int x, int v[], int n) {
  int j = 0;
  while (j < n && v[j] != x) j += 1;
  return j;
}
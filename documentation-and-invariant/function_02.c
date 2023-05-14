/*
 * Uma boa documentação evita sejar o código com
 * comentários e limita-se a explicar o que cada
 * uma das funções que compõem o programa faz.
 * 
 * É um minimanual que dá instruções precisas e 
 * completas sobre o uso correto da função.
 * 
 * O minimaul começa por explicar o que entra
 * (que dados a função recebe) e o que sai 
 * (que objetos a função devolve).
 * 
 * Uma boa documentação deve explicar o que a
 * função faz e não perder tempo tentando explicar
 * como a função faz o que faz.
 * 
 * Exemplos:
*/

/* A função abaixo recebe um inteiro n >= 1 e um vetor v e
 * devolve o valor de um elemento máximo de v[0..n-1]. */
int Max (int v[], int n) {
  int j, x = v[0];
  for (j = 1; j < n; j++)
    if (x < v[j]) x = v[j];
  return x;
}

/* A função busca recebe um número x, um vetor v, e um 
 * indice n >= 0 e devolve 1 se x está em v[0..n-1] e 
 * 0 caso contrário */
int search(int x, int v[], int n) {
  int j = 0;
  while (j < n && v[j] != x) 
    j += 1;
  if (j < n) return 1;
  else return 0;
}
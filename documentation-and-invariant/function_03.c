/*
 * A casos em que comentários misturados com código
 * são úteis. Como o corpo de muitas funções consiste
 * em um processo iterativo, podemos nesse caso enri-
 * quecer a documentação dizendo quais os invariantes
 * do processo iterativo.
 * 
 * Um invariante é uma relação entre os valores das
 * variaveis que vale no inicio de cada iteração e
 * são se altera de uma iteração para outra.
 * 
 * Essas relações invariantes explicam o funcionamento
 * do processo iterativo e permitem provar, por indução,
 * que ele tem o efeito desejado.
 * 
 * Exemplo 1:
*/

int Max (int v[], int n) {
  int j, x = v[0];
  for (j = 1; j < n; j++)
    /* nesse ponto x é um elemento máximo de v[0..j-1] */
    if (x < v[j]) x = v[j];
  return x;
}

/* 
 * Exemplo 2 
 *
 * A função scmax recebe um vetor v[0..n-1], com n > 0, e 
 * devolve o comprimento se um segmento constante máximo
 * 
 * obs: um segmento v[i..j] de um vetor v[0..n-1] é 
 * constante se todos os seus elementos têm o mesmo valor
*/
int scmax (int v[], int n) {
  int i = 0, max = 0;
  while (/*A*/ i < n) {    // no ponto A
    // 1. max é o comprimento de um segmento 
    //    constante máximo de v[0..i-1] e
    // 2. i == 0 ou v[i-1] != v[i] ou i == n
    int j = i + 1;
    while (j < n && v[j] == v[i]) ++j;
    if (max < j - i) max = j - i;
    i = j;
  }
  return max;
}


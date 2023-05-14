/*
 * Aspectos fundamentais em um bom layout
 *  - Os espaços entre as palavras e símbolos 
 *    em uma linha de código;
 *  - A indentação de cada linha de código 
 *    (produzida pelos espaçoes me branco no início 
 *    da linha) 
 * 
 * Amostra de um bom layout 
 *  - Bem indentado
 *  - Uso corretos dos espaços
 *  - Posição dos caracteres { e }
 */
int Function (int n, int v[]) {
  int i, j;
  i = 0;
  while (i < n) {
    if (v[i] != 0) 
      i = i + 1;
    else {
      for (j = i + 1; j < n; j++) 
        v[j-1] = v[j];
      n = n - 1;
    }
  }
  return n;
}

/*
 * Se necessário economia de espaço, recorrer a um
 * layout mais compacto.
 * Segue um exemplo
 */
int FunctionV2 (int n, int v[]) {
  int i, j;
  i = 0;
  while (i < n) {
    if (v[i] != 0)  i = i + 1;
    else {
      for (j = i + 1; j < n; j++)  v[j-1] = v[j];
      n = n - 1; } }
  return n; }

/*
 * Sugestões para uma boa documentação
 *  - use espaço para separar uma palavra da seguinte
 *    (símbolos como =, <=, while, if, for etc. contam como palavras);
 *  - deixe um espaço depois, mas não antes, de cada sinal de pontuação;
 *  - deixe um espaço depois, mas não antes, de fechar um parântese;
 *  - deixe um espaço antes, mas não depois, de abrir uma parêntese;
 * 
 */
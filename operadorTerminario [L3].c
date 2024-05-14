// QUESTÃO A

int main(void) {
  int x, valor;
  printf("Digite um inteiros:\n");
  scanf("%d", &x);
  valor = (x / 2 == 0) ? x * 0 + 1 : x * 0 - 1;
  printf("O valor de X eh: %d", valor);
  return 0;
}

// QUESTÃO B

int main(void) {
  float x, valor;
  printf("Digite um racional:\n");
  scanf("%f", &x);
  valor = (x > 0) ? x * 0 + 1 : x * 0 + 0;
  printf("O valor de X eh: %f", valor);
  return 0;
}

// QUESTAO C

// condição1? (condição2? expressão1: expressão2): expressão3;*/

#include <stdio.h>

int main() {

  float a, b, c, d;
  printf("Digite tres numeros racionais:\n");
  scanf("%f %f %f", &a, &b, &c);

  d = (a > b ? (a > c ? a : c) : (b > c ? b : c));
  printf("o maior numero é: %f", d);

  return 0;
}

// QUESTAO D

#include <stdio.h>

int main() {

  float a, b, c, d, media;
  printf("Digite tres numeros racionais:\n");
  scanf("%f %f %f", &a, &b, &c);

  d = (a + b > b + c ? (a + b > c + a ? a + b : c + a)
                     : (b + c > c + a ? b + c : c + a));

  media = d / 2;
  printf("%f", d);
  printf("A media eh: %f", media);

  return 0;
}

// QUESTAO E
// condição1? soluçao1: (condição2)? solucaoo 2: solucao3;*/

#include <ctype.h>
#include <stdio.h>

int main() {

  char c, d;
  printf("Digite ua letra ou caracter:\n");
  scanf("%c", &c);

  d = (c >= 'a' && c <= 'z') ? 'm' : (c >= 'A' && c <= 'Z') ? 'M' : '?';
  printf("o maior numero é: %c", d);

  return 0;
}

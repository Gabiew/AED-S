#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2;

  printf("Digite um número: ");
  scanf("%d", &num1);
  printf("Digite outro número: ");
  scanf("%d", &num2);

  printf("A soma dos números é: %d\n", num1 + num2);
  printf("O produto do primeiro número pelo quadrado do segundo: %d\n",
         num1 * (num2 * num2));
  printf("O quadrado do primeiro número: %d\n", num1 * num1);
  printf("A raiz quadrada da soma dos quadrados: %d\n",
         (int)sqrt(num1 * num1 + num2 * num2));
  printf("O seno da diferença do primeiro número pelo segundo: %lf\n",
         sin(num1 - num2));
  printf("O módulo do primeiro número: %d\n", abs(num1));
  return 0;
}

#include <stdio.h>
int main() {
  int soma = 0, a;
  float res;
  for (int i = 0; i < 10; i++) {
    printf("Digite um numero: ");
    scanf("%d", &a);
    soma += a;
  }
  res = (float)soma / 10;
  printf("A media dos numeros e:%.2f", res);
  return 0;
}

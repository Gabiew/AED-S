#include <stdio.h>
#include <stdlib.h>

int main() {
  float fah;
  int cel;
  printf("Digite a temperatura em Fahrenheit: ");
  scanf("%f", &fah);

  cel = (fah - 32) * (5.0/ 9.0);

  printf("A temperatura em Celsius é: %d", cel);

  return 0;
}

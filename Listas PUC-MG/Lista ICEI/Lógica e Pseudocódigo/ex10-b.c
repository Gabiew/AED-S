#include <stdio.h>
int main() {
  float cel, fah;

  printf("Insira a temperatura em Celsius: ");
  scanf("%f", &cel);

  fah = ((1.8 * cel) + 32);

  printf("A temperatura em Fahrenheit:%.2f", fah);
  return 0;
}

#include <stdio.h>
int main() {
  int x = 780000, a, b, c;
  a = (x * 46) / 100;
  b = (x * 32) / 100;
  c = x - a - b;

  printf("\nO valor do primeiro ganhador é: %d", a);
  printf("\nO valor do segundo ganhador é: %d", b);
  printf("\nO valor do terceiro ganhador é: %d", c);
  return 0;
}

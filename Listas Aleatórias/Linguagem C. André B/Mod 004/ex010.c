#include <stdio.h>
int main() {
  int a, b, c, op;
  float res;
  scanf("%d", &op);
  if (op < 0 || op > 4) {
    printf("Operação inválida");
    return 0;
  }

  scanf("%d%*c", &a);
  scanf("%d%*c", &b);
  scanf("%d%*c", &c);

  switch (op) {
  case 1:
    printf("Geométrica: ");
    res = a * b * c;
    printf("%.2f", res);
    break;
  case 2:
    printf("Ponderada: ");
    res = (a + 2 * b + 3 * c) / 6;
    printf("%.2f", res);
    break;
  case 3:
    printf("Harmônica: ");
    res = 1 / ((1 / a) + (1 / b) + (1 / c));
    printf("%.2f", res);
    break;
  case 4:
    printf("Aritmética: ");
    res = (a + b + c) / 3;
    printf("%.2f", res);
    break;
  }
  return 0;
}

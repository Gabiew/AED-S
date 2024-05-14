#include <stdio.h>
int main() {
  double a, b, res;
  int op;
  printf("1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
  scanf("%d", &op);

  if (op < 1 || op > 4) {
    printf("Operação inválida");
    return 0;
  }
  scanf("%lf%*c", &a);
  scanf("%lf%*c", &b);

  switch (op) {
  case 1:
    res = a + b;
    printf("%.2lf", res);
    break;
  case 2:
    res = a - b;
    printf("%.2lf", res);
    break;
  case 3:
    res = a * b;
    printf("%.2lf", res);
    break;
  case 4:
    res = a / b;
    printf("%.2lf", res);
    break;
  }
  return 0;
}

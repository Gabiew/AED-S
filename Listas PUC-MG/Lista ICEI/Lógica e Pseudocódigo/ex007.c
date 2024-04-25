#include <stdio.h>
int main() {
  float n1;
  int n2, res;

  printf("Insira um número: ");
  scanf("%f", &n1);
  printf("Insira um número: ");
  scanf("%d", &n2);

  res = n1 + n2;
  printf("O resultado é:%d\n", res);
  return 0;
}

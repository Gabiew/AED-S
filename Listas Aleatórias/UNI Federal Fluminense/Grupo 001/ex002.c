#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, a, b, c, d, e, f, g, h, i;
  printf("Digite um número:");
  scanf("%d", &num);

  a = 1 * num;
  b = 2 * num;
  c = 3 * num;
  d = 4 * num;
  e = 5 * num;
  f = 6 * num;
  g = 7 * num;
  h = 8 * num;
  i = 9 * num;

  printf("%d x 1 = %d\n", num, a);
  printf("%d x 2 = %d\n", num, b);
  printf("%d x 3 = %d\n", num, c);
  printf("%d x 4 = %d\n", num, d);
  printf("%d x 5 = %d\n", num, e);
  printf("%d x 6 = %d\n", num, f);
  printf("%d x 7 = %d\n", num, g);
  printf("%d x 8 = %d\n", num, h);
  printf("%d x 9 = %d\n", num, i);

  return 0;
}

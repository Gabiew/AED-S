#include <stdio.h>
int main() {
  float a, b, c, d, l;
  scanf("%f%*c", &a);
  scanf("%f%*c", &b);
  scanf("%f%*c", &c);
  scanf("%f%*c", &d);
    l = (a + b + c + d) / 4;
  printf("Média:%.2f", l);
  return 0;
}

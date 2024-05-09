#include <stdio.h>
#define pi 3.14
int main() {
  double rad, deg;
  scanf("%lf", &deg);
  rad = deg * pi / 180;
  printf("%lf", rad);
  return 0;
}

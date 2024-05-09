#include <stdio.h>
int main() {
  double kmh, ms;
  scanf("%lf", &kmh);
  ms = kmh / 3.6;
  printf("%.2lf\n", ms);
  return 0;
}

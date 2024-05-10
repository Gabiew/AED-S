#include <stdio.h>
int main() {
  double x, y;
  scanf("%lf", &x);
  scanf("%lf", &y);
  if (x > y) {
    printf("%.2lf", x);
  } else {
    printf("%.2lf", y);
  }
  return 0;
}

#include <stdio.h>
int main() {
  double x, y;
  scanf("%lf", &x);
  scanf("%lf", &y);
  if (x > y) {
    printf("%.2lf", x);
  } else if (x == y) {
    printf("Os dois números são iguais");
  } else {
    printf("%.2lf", y);
  }
  return 0;
}

#include <stdio.h>
int main() {
  double fah, cel;
  scanf ("%lf", &cel);
  fah = (cel * 1.8) + 32;
  printf ("%.2lf", fah);
  return 0;
}

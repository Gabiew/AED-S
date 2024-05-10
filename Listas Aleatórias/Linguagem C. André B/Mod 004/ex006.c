#include <math.h>
#include <stdio.h>
int main() {
  float altura;
  char sexo;
  scanf("%f%*c", &altura);
  scanf(" %c", &sexo);

  switch (sexo) {
  case 'm':
    printf("%.2f", (72.7 * altura) - 58);
    break;
  case 'M':
    printf("%.2f", (72.7 * altura) - 58);
    break;
  case 'f':
    printf("%.2f", (62.1 * altura) - 44.7);
    break;
  case 'F':
    printf("%.2f", (62.1 * altura) - 44.7);
    break;
  }
  return 0;
}

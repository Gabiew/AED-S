#include <stdio.h>
#include <math.h>
int main() {
  float x;
  scanf ( "%f", &x );

  if (x<0){
    printf("Fora de intervalo\n");
  } else {
    printf ("Número ao quadrado:%.2f", x*x);
    printf ("\nRaiz quadrada:%.2f", sqrt(x));
  }
  return 0;
}

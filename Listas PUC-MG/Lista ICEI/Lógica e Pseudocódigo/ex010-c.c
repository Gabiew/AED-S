#include <stdio.h>
int main (){
  float horas, segundos;

  printf("Digite as horas: ");
  scanf ("%f", &horas);

   segundos= horas*3600;
  printf("O valor em segundos é: %.1f", segundos);
return 0;
}

#include <stdio.h>
int main () {
  double cel,far;
  int op;

  printf ("1-Celsius->Farenheit\n2-Farenheit->Celsius\n");
  printf ("Digite sua opção: ");
  scanf ("%d",&op);

  switch (op)
  {
    case 1:
    printf ("Digite a temperatura em Celsius: ");
    scanf ("%lf",&cel);
     far=(cel*1.8)+32;
     printf ("Farenheit:%.2lf",far);
     break;
    case 2:
    printf ("Digite a temperatura em Farenheit: ");
    scanf ("%lf",&far);
     cel= (far-32)/1.8;
     printf ("Celsius:%.2lf",cel);
     break;
    default: 
     printf ("Opção inválida");
  }
 return 0;
}

//Fiz uma graça aqui 

#include <stdio.h>
int main (){
  double altura, pesoid;

  printf ("Olá minha querida! Vamos descobrir qual o seu peso ideal\n");
  printf ("Por gentileza digite seu altura: ");
  scanf ("%lf",&altura);

   pesoid=(62.1*altura)-44.7;

  printf ("Seu peso ideal é aproximadamente:%.2lf",pesoid);
return 0;
}

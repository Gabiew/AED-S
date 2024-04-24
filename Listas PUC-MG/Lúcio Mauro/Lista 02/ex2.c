#include <stdio.h>
int main () {
  int n1,n2;
  float res;
  int op;

  printf ("1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão Real\n");
  printf ("Escolha uma opção: ");
  scanf ("%d",&op);
  if (op>4 || op<1) {
    printf ("Opção inválida");
    return 0;
  }
  printf ("Digite um número: ");
  scanf ("%d",&n1);
  printf ("Digite mais um número: ");
  scanf ("%d",&n2);

 
   switch (op)
   {
  case 1:
   res=n1+n2;
   break;
  case 2:
   res=n1-n2;
   break;
  case 3:
   res=n1*n2;
   break;
  case 4:
   if (n2==0)
   {
    printf ("Não é possível dividir um número por 0");
    return 0;
   } else
    res=n1/n2;
  break;
     default:
      printf ("Opção inválida");
   }
  printf ("O resultado é: %.2f",res);
  return 0;
}

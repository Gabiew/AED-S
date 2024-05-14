#include <stdio.h>
int main () {
int soma=0,a;
  for (int i=0;i<10;i++) {
    printf("Digite um numero: ");
    scanf("%d",&a);
    soma=soma+a;
    printf ("%d\n",soma);
  }
  return 0;
}

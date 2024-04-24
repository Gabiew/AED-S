#include <stdio.h>
int main (){
 int a,b,c;
   printf ("Valor de a:");
    scanf ("%d%*c",&a);
    printf ("Valor de b:");
    scanf ("%d%*c",&b);
    printf ("Valor de c:");
    scanf ("%d%*c",&c);

  if ((a < b && a > c) || (a > b && a < c)) {
      printf("'A' é o segundo maior número\n");
  } else if ((b < a && b > c) || (b > a && b < c)) {
      printf("'B' é o segundo maior número\n");
  } else {
      printf("'C' é o segundo maior número\n");
  }

  return 0;
}

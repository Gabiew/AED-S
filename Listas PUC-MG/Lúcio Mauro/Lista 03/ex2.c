#include <stdio.h>
int main (){
  int a,b,c;
    printf ("Valor de a:");
    scanf ("%d%*c",&a);
    printf ("Valor de b:");
    scanf ("%d%*c",&b);
    printf ("Valor de c:");
    scanf ("%d%*c",&c);

    if (a>b && a>c){
        printf ("O maior valor é: %d\n",a);
    } else if (b>a && b>c){
        printf ("O maior valor é: %d\n",b);
    } else {
        printf ("O maior valor é: %d\n",c);
    }
  return 0;
}

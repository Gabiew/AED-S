#include <stdio.h>
int main (){
  int a,b,c;
    printf ("Valor de a:\n");
    scanf ("%d",&a);
    printf ("Valor de b:\n");
    scanf ("%d",&b);
    printf ("Valor de c:\n");
    scanf ("%d",&c);

    if (a+b<c){
        printf ("true!\n");
    } else {
        printf ("false!\n");
    }
  return 0;
}

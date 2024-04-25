#include <stdio.h>
int main () {
  double n1,n2, resb,resc,resd;

   printf ("Insira um número: ");
   scanf ("%lf",&n1);
   printf ("Insira um número: ");
   scanf ("%lf",&n2);

    //maior deles
    if (n1>n2){
            printf ("O maior deles é:%.1lf\n", n1);
        } else if (n1==n2){
            printf ("Eles são iguais");
        } else {
            printf ("O maior deles é:%.1lf\n", n2);
        }
    //Produto 
     resb=n1*n2;
     printf ("Produto:%.2lf\n",resb);

    //Média
      resc=(n1+n2)/2;
      printf ("Média:%.2lf\n",resc);

    //Soma antecessor com sucessor
      resd= (n1-1)+(n2+1);
      printf ("Soma antecessor com sucessor:%.2lf\n",resd);

return 0;
}

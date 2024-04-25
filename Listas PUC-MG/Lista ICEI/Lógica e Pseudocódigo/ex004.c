#include <stdio.h>
int main () {
  double n1, n2;
    printf ("Insira um número: ");
    scanf ("%lf",&n1);
    printf ("Insira um número: ");
    scanf ("%lf",&n2);

        if (n1>n2){
            printf ("O maior deles é:%.1lf\n", n1);
        } else if (n1==n2){
            printf ("Eles são iguais");
        } else {
            printf ("O maior deles é:%.1lf\n", n2);
        }
return 0;
}

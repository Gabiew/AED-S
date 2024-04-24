#include <stdio.h>
#include <math.h>
#define pi 3.14
int main (){
 double area, raio;

printf ("Digite o raio: ");
scanf ("%lf",&raio);

 area=pi*(pow(raio,2)); //pow(base,expoente) da biblioteca math.h

 printf ("A área é:%.2lf",area);
 return 0;
}

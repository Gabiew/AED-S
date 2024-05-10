#include <stdio.h>
int main() {
  float altura, peso;
  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("Digite seu peso: ");
  scanf("%f", &peso);

  if (altura<1.20 && peso<=60){
    printf("A");
  } else if (altura<1.20 && peso>60 && peso<=90){
    printf("D");
  } else if (altura<1.20 && peso>90){
    printf("G");
  }

  if (altura >1.20 && altura<=1.70 && peso<=60){
    printf("B");
  } else if (altura >1.20 && altura<=1.70 && peso>60 && peso<=90){
    printf("E");
  } else if (altura >1.20 && altura<=1.70 && peso>90){
    printf("H");
  }

  if (altura>1.70 && peso<=60){
    printf("C");
  } else if (altura>1.70 && peso>60 && peso<=90){
    printf("F");
  } else if (altura>1.70 && peso>90){
    printf("I");
  }
  return 0;
}

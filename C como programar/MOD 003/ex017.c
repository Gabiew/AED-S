#include <stdio.h>           //Para entrada e saída
int main() {                 // Função principal//Algoritmo
  float litros, km, consumo; // Declaração de variáveis

  // printf("Digite a quantidade de litros: ");
  scanf("%f", &litros);
  // printf("Digite a quantidade de km: ");
  scanf("%f", &km);

  consumo = km / litros; //Consumo é dado em km por litro
  printf("O consumo médio é de %.2f km/l", consumo);

  return 0;
}

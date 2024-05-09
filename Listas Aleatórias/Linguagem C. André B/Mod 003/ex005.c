#include <stdio.h>
int main() {
  int ano_atual, idade, ano_nascimento;
  scanf("%d", &ano_atual);
  scanf("%d", &idade);
    ano_nascimento = ano_atual - idade;
  printf("Ano de nasc:%d", ano_nascimento);
  return 0;
}

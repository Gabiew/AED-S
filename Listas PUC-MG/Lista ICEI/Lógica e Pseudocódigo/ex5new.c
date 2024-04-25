#include <stdio.h>
int main() {
  double n1, n2, resb, resc, resd;
  int op;
  printf("Opções:\n1-Maior deles\n2-Produto\n3-Média\n4-Soma sucessor com "
         "antecessor\n");
  printf("Insira o número da opção desejada: ");
  scanf("%d", &op);
  printf("Insira um número: ");
  scanf("%lf", &n1);
  printf("Insira um número: ");
  scanf("%lf", &n2);

  if (op > 5 && op < 1) {
    printf("Opção inválida");
    return 0;
  }

  switch (op) {
  case 1:
    // maior deles
    if (n1 > n2) {
      printf("O maior deles é:%.1lf\n", n1);
    } else if (n1 == n2) {
      printf("Eles são iguais");
    } else {
      printf("O maior deles é:%.1lf\n", n2);
    }
    break;
  case 2:
    // Produto
    resb = n1 * n2;
    printf("Produto:%.2lf\n", resb);
    break;
  case 3:
    // Média
    resc = (n1 + n2) / 2;
    printf("Média:%.2lf\n", resc);
    break;
  case 4:
    // Soma antecessor com sucessor
    resd = (n1 - 1) + (n2 + 1);
    printf("Soma antecessor com sucessor:%.2lf\n", resd);
    break;
  default:
    printf("Opção inválida!");
  }
  return 0;
}

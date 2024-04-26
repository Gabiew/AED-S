#include <stdio.h>
int main() {
  int lado, i, j;
  char tipo;

  printf("Tamnho do lado: ");
  scanf("%d", &lado);
  printf("Insira o tipo do quadrado: ");
  scanf(" %c", &tipo);

  // Início da estrutura case
  switch (tipo) {
  case 'c': // Quadrado totalmente preenchido
    for (i = 0; i < lado; i++) {
      for (j = 0; j < lado; j++) {
        printf("*");
      }
      printf("\n");
    }
    break;
  case 'b': // Bordas
    for (i = 0; i < lado; i++) {
      for (j = 0; j < lado; j++) {
        if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
  case 'i': // Diagonal
    for (i = 0; i < lado; i++) {
      for (j = 0; j < lado; j++) {
        if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1 || i == j) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
  case 's': // Diagonal secundária
    for (i = 0; i < lado; i++) {
      for (j = 0; j < lado; j++) {
        if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1 ||
            i + j == lado - 1) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
  case 'h': // Divisão horizontal
    for (i = 0; i < lado; i++) {
      for (j = 0; j < lado; j++) {
        if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1 ||
            i == lado / 2) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
  case 'v': // Divisão vertical
    for (i = 0; i < lado; i++) {
      for (j = 0; j < lado; j++) {
        if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1 ||
            j == lado / 2) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
  default:
    printf("Opção inválida");
  }
  return 0;
}

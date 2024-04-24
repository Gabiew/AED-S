#include <stdio.h>

int main() {
    double l1, l2, l3;

    printf("Digite o primeiro lado: ");
    scanf("%lf", &l1);
    printf("Digite o segundo lado: ");
    scanf("%lf", &l2);
    printf("Digite o terceiro lado: ");
    scanf("%lf", &l3);

    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {
        printf("A partir dos dados analisados trata-se de um triângulo\n");
        if (l1 == l2 && l2 == l3) {
            printf("O triângulo é equilátero\n");
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            printf("O triângulo é isósceles\n");
        } else {
            printf("O triângulo é escaleno\n");
        }
    } else {
        printf("A partir dos dados analisados não se trata de um triângulo\n");
    }

    return 0;
}

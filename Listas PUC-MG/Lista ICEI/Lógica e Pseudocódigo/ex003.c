#include <stdio.h>

int main() {
    double nota;

    printf("Insira a nota: ");
    scanf("%lf", &nota);

    if (nota < 10) {
        printf("Reprovado!");
    } else {
        printf("Aprovado!");
    }

    return 0;
}

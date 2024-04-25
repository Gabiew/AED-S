#include <stdio.h>

int main() {
    double n1, n2, n3, res;
    int p1, p2, p3;

    printf("Insira a primeira nota: ");
    scanf("%lf", &n1);
    printf("Digite o peso para a nota 1: ");
    scanf("%d", &p1);
    printf("Insira a segunda nota: ");
    scanf("%lf", &n2);
    printf("Digite o peso para a nota 2: ");
    scanf("%d", &p2);
    printf("Insira a terceira nota: ");
    scanf("%lf", &n3);
    printf("Digite o peso para a nota 3: ");
    scanf("%d", &p3);

    res = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("A média ponderada das notas é: %.1lf\n", res);
    return 0;
}

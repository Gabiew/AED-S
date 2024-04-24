#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, del, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    del = (b * b) - 4 * a * c;

    if (del < 0) {
        printf("Não existe raiz real\n");
    } else if (del == 0) {
        x1 = -b / (2 * a);
        printf("A raiz é igual a %lf\n", x1);
    } else { // del > 0
        x1 = (-b + sqrt(del)) / (2 * a);
        x2 = (-b - sqrt(del)) / (2 * a);
        printf("As raízes são %.2lf e %.2lf\n", x1, x2);
    }

    return 0;
}

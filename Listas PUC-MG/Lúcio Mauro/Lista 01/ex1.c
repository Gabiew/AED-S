#include <stdio.h>
int main() {
    char sexo;
    double altura, res;
    char op;

    printf("Nesse programa vamos calcular um peso ideal de acordo com sua altura e sexo!\n");
    printf("Primeiro me informe seu sexo [M/F]: ");
    scanf(" %c", &op);

    printf("Agora, me informe sua altura em metros: ");
    scanf("%lf", &altura);

    switch (op) {
        case 'M':
        case 'm':
            res = (72.7 * altura) - 58;
            printf("Seu peso ideal é: %.2lf\n", res);
            break;
        case 'F':
        case 'f':
            res = (62.1 * altura) - 44.7;
            printf("Seu peso ideal é: %.2lf\n", res);
            break;
        default:
            printf("Opção inválida\n");
    }

    return 0;
}

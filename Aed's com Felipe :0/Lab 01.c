#include <stdio.h>

int main() {
    int nota;
    char apro, recup, repo; 

    printf("Digite a nota: ");
    scanf("%d", &nota); //Leitura da nota

    //Verifica se a nota é maior ou igual a 60, se vedadeiro multiplica com simbolo s, se falso multiplica com simbolo de n
    apro = (nota >= 60) * 'S' + (nota < 60) * 'N';

    //Verifica se a nota é maior ou igual a 40, se vedadeiro multiplica com simbolo s, se falso multiplica com simbolo de n
    recup = ((nota >= 40 && nota < 60) * 'S') + ((nota < 40 || nota >= 60) * 'N');

    //Verifica se a nota é maior ou igual a 0, se vedadeiro multiplica com simbolo s, se falso multiplica com simbolo de n
    repo = (nota < 40) * 'S' + (nota >= 40) * 'N';

    printf("Aprovado: %c\n", apro);
    printf("Recuperação: %c\n", recup);
    printf("Reprovado: %c\n", repo);

    return 0;
}


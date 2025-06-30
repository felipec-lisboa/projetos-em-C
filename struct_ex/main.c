#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[100];
    int idade;
    float altura;


}felipe;
int main()
{
    printf("Digite seu nome: ");
    fgets(felipe.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &felipe.idade);
    printf("Digite sua altura: ");
    scanf("%f", &felipe.altura);
    getchar();
    printf("Voce se chama %s\n Tem %d anos \n Mede %f", felipe.nome,felipe.idade,felipe.altura);

    return 0;
}

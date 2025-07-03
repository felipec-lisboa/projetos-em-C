#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
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
*/


struct alunos
{
    char nome[100];
    int matricula;
    float nota;
};

int main()
{
    float media;
    float acumulador = 0;

    struct alunos st_alunos[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Digite seu nome: ");
        fgets(st_alunos[i].nome, 100, stdin);
        st_alunos[i].nome[strcspn(st_alunos[i].nome, "\n")] = 0;

        printf("Digite sua matricula: ");
        scanf("%d", &st_alunos[i].matricula);

        printf("Digite sua nota: ");
        scanf("%f", &st_alunos[i].nota);

        getchar();
        acumulador += st_alunos[i].nota;
    }

    media = acumulador / 2;
    printf("A media foi: %.2f\n", media);
    printf("Alunos com nota acima da média:\n");

    for (int i = 0; i < 2; i++)
    {
        if (st_alunos[i].nota > media)
        {
            printf("- %s (nota: %.2f)\n", st_alunos[i].nome, st_alunos[i].nota);
        }
    }

    return 0;
}



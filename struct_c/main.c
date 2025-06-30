#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
    float nota;

};

int main()
{
    struct st_aluno alunos[2];
    for(int i = 0; i <2; i++){
    printf("Informe a matricula do aluno: ");
    fgets(alunos[i].matricula, 10, stdin);

    printf("Digite o seu nome: ");
    fgets(alunos[i].nome, 100, stdin);

    printf("Digite o nome do seu curso: ");
    fgets(alunos[i].curso, 50, stdin);

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &alunos[i].ano_nascimento);
    printf("Qual foi sua nota: ");
    scanf("%f", &alunos[i].nota);
    getchar();
    }

    for (int i = 0; i<2; i++){

    printf("Dados do aluno:\n");
    printf("Matricula: %s\n", alunos[i].matricula);
    printf("Nome: %s\n", alunos[i].nome);
    printf("Curso: %s\n", alunos[i].curso);
    printf("Ano de nascimento: %d\n", alunos[i].ano_nascimento);
    printf("Ano de nascimento: %f\n", alunos[i].nota);


    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char nome[3][50];
    for(int i =0; i < 3; i++){
        printf("Digite seu nome: ");
        gets(nome[i]);
    }
    for(int i = 0; i<3; i++){
        printf("Ola seu nome e : %s \n", nome[i]);
    }
    */

    int numeros[2][2];
    for(int i =0; i <2; i++)
    {
        for(int x =0; x <2; x++)
        {
            printf("Digite um numero :");
            scanf("%d", &
                  numeros[i][x]);
        }
    }

    for (int i =0; i <2; i++)
    {
        for(int x =0; x <2; x++){
        printf("%d", numeros[i][x]);
        }
        printf("\n");
        }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int soma;
    int valores[6];
    valores[0] = 1;
    valores[1] = 0;
    valores[2] = 5;
    valores[3] = -2;
    valores[4] = 100;
    valores[5] = 7;
    soma = (valores[0] + valores[1] + valores[5]);
    printf("%d \n", soma);

    for(int i = 0; i <6; i++)
    {
        printf("O vetor esta na posicao %d e o valor e: %d \n", i, valores[i]);
    }

    int vetor[10];
    int par = 0;
    int impar = 0;
    for(int i =0; i <10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] %2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    printf("A quantidade de numeros par no vetor e: %d\n", par);
    printf("A quantidade de numeros impar no vetor e: %d", impar);
    */

    int vetor[10];
    int negativo = 0;
    for(int i = 0; i <10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0){
            negativo ++;
        }

    }
    printf("A quantidade de numeros negativos foi: %d", negativo);

    return 0;
}

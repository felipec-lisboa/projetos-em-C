#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int numero, soma = 0;
    //çopping for
    for(int i =0; i < 5; i++){
    printf("Digite um numero: ");
    scanf("%d", &numero);
    soma += numero;
    }
    printf("A soma dos 5 numeros no final do looping e %d\n", soma);

    //while
    int numero, soma =0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    while(numero != 0)
    {
        soma +=numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }
    printf("A soma e %d", soma);

    */

    int numero, soma = 0;
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma +=numero;
    }
    while(numero!=0);

    printf("A soma e %d", soma);

    return 0;






}

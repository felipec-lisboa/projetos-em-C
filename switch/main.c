#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor ;
    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &valor);

    switch(valor)
    {
    case 1:
        printf("Domingo");
        break;
    }
    switch(valor)
    {
    case 2:
        printf("Segunda");
        break;

    case 3:
        printf("terca");
        break;

    case 4:
        printf("quarta");
        break;

    case 5:
        printf("sexta");
        break;

    case 6:
        printf("sabado");
        break;

    case 7:
        printf("Domingo");
        break;
    default:
        printf("Digite um numero entre 1 e 7");
    }


    return 0;
}

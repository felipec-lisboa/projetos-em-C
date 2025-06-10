#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    if(idade <18)
    {
        printf("Voce e menor de idade\n");

    }
    else if (idade >18 && idade <60)
    {
        printf("Voce e adulto\n");
    }
    else
    {
        printf("Voce e idoso\n");
    }
    printf("Sua idade e %d", idade);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

/*
int fib(int n)
{
    if(n == 0)
    {

        return 0;
    }

    if(n == 1)
    {
        return 1;
    }

    return fib(n-1)+fib(n-2);

}

int main()
{

    int qtd;

    printf("Informe o tamanho da sequencia fibonacci: ");
    scanf("%d", &qtd);

    for(int i =0; i < qtd; i++){

        printf("%d ", fib(i + 1));

    }

    return 0;
}


int main()
{

    int numero = 1;
    int contador = 0;

    printf("Apresentando os 5 primeiros multiplos de 3: \n");
    while(contador < 5)
    {
        if(numero % 3 == 0)
        {
            printf("O numero %d e multiplo de 3\n", numero);
            contador++;

        }
        numero++;
    }




int main(){


for (int i = 0; i <= 100000; i = i + 100){
    printf("%d\n",i);
}



    return 0;
}
*/


int main()
{
    int menor ;
    int maior = 0;
    int numero;

    for(int i =0; i <10; i++)
    {

        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero > maior)
        {
            maior = numero;
        }
        if(numero < menor)
        {
            menor = numero;
        }
    }
    printf("O maior numero foi: %d\n", maior);
    printf("O menor numero foi: %d", menor);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //atividade 1
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("O numero que voce digitou foi: %d", numero);
    // atividade 2
    int num1,num2,num3, soma;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);
    printf("Digite um numero: ");
    scanf("%d", &num3);
    soma = num1+num2+num3;
    printf("A soma dos tres numeros e: %d", soma);
    //atividade 3
    float num, quadrado =0;

    printf("Digite um numero para saber o valor dele ao quadrado: ");
    scanf("%f", &num);

    quadrado = num * num;
    printf("O numero ao quadrado vai ser %2.f", quadrado);

    return 0;
}

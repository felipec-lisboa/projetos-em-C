#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //atividade 1
    int num1,num2,num3;
    int quadrado1,quadrado2,quadrado3;
    printf("Digite um numero : ");
    scanf("%d", &num1);
    printf("Digite um numero : ");
    scanf("%d", &num2);
    printf("Digite um numero : ");
    scanf("%d", &num3);

    quadrado1 = num1 * num1;
    quadrado2 = num2 * num2;
    quadrado3 = num3 * num3;
    printf("O quadrado do primeiro numero e : %d\n", quadrado1);
    printf("O quadrado do segundo numero e : %d\n", quadrado2);
    printf("O quadrado do terceiro numero e : %d\n", quadrado3);

    //atividade 2 mais complexa
    int num1;
    int acumulador  = 0;
    int media = 0;
    for(int i =0; i <4; i++){
    printf("Digite um numero: ");
    scanf("%d", &num1);
    acumulador += num1;
    }
    media = acumulador/4;
    printf("A media das notas e : %d", media);

    //atividade 2 mais simples
    int num1,num2,num3, num4;
    int media = 0;
    printf("Digite um numero : ");
    scanf("%d", &num1);
    printf("Digite um numero : ");
    scanf("%d", &num2);
    printf("Digite um numero : ");
    scanf("%d", &num3);
    printf("Digite um numero : ");
    scanf("%d", &num4);

    media = num1+num2+num3+num4/4;

    printf("A media das notas e : %d", media);
    */
    //atividade 3

    float aposta1, aposta2, aposta3, total_aposta = 0;
    float premio = 0;
    float porcentagem1, porcentagem2, porcentagem3, total_porcentagens = 0;
    float premio1, premio2, premio3, total_premios = 0;
    printf("Digite quanto o primeiro amigo apostou: ");
    scanf("%f", &aposta1);

    printf("Digite quanto o segundo amigo apostou: ");
    scanf("%f", &aposta2);

    printf("Digite quanto o terceiro amigo apostou: ");
    scanf("%f", &aposta3);

    printf("Digite o valor do premio: ");
    scanf("%f", &premio);

    total_aposta = aposta1 + aposta2 + aposta3;
    printf("O total de apostas foi: %.2f\n", total_aposta);


    porcentagem1 = aposta1/total_aposta;
    porcentagem2 = aposta2/total_aposta;
    porcentagem3 = aposta3/total_aposta;
    total_porcentagens = porcentagem1 + porcentagem2 + porcentagem3;
    printf("o total de porcentagem e %.2f\n", total_porcentagens);

    premio1 = premio * porcentagem1;
    premio2 = premio * porcentagem2;
    premio3 = premio * porcentagem3;
    total_premios = premio1 + premio2 + premio3;
    printf("O total em premios e %.2f\n", total_premios);

    printf("O apostador 1 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta1, porcentagem1, premio1);
    printf("O apostador 2 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta2, porcentagem2, premio2);
    printf("O apostador 3 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta3, porcentagem3, premio3);

    return 0;
}

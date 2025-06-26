#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //vetores e string
    char nome[50];
    printf("Qual sei nome? ");
    gets(nome);
    printf("Ola %s\n", nome);

    //vetores e caracteres
    char letras[26];
    int contador = 0;
    for(int i = 97; i <= 122; i++)
    {
        letras[contador] = i;
        contador++;
    }

    for(int i = 0; i<26; i++){
        printf("%d == %c\n", letras[i], letras[i]);
    }

    */


    //vetores de inteiros
    int numeros[5];
    numeros[0] = 1;
    numeros[1] =2;
    numeros[2] =3;
    numeros[3] =8;
    numeros[4] =12;



    //vetores de reais
    float valores[5];
    for(int i = 0; i < 5; i++){
        valores[i] = (float)numeros[i] / 2;
}
    for(int i = 0; i < 5; i++){
        printf("%f\n", valores[i]);

    }



return 0;
}

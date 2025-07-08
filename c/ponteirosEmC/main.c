#include <stdio.h>
#include <stdlib.h>
/*
void incrementa(int* valor){
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", *valor);
    printf("O endereco de memoria vale %d\n", valor);

    printf("Depois de incrementar.\n");
    //valor++;
    printf("O contador vale %d\n", ++(*valor));


}


int main()
{

    int contador = 10;

    incrementa(&contador);
    printf("O endereco de memoria vale %d\n", &contador);

    return 0;

int main(){
    int n;

    int* p;

    printf("Digite um numero: ");
    scanf("%d", &n);

    p = &n;

    printf("O valor da variavel p e %d\n", *p);

    printf("O numero informado foi %d\n", n);

    printf("Endereco de memoria: %d\n", &n);

    printf("Endereco de memoria do ponteiro: %p\n", p);

return 0;
}




int main()
{

    int valores[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &valores[i]);
    }


    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", valores[i]);
        printf("%p\n", &valores[i]);

    }

    return 0;
}
*/
int main()
{

    char valores[5] = {1,2,3,4,55};



    for(int i = 0; i < 5; i++)
    {
    printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));

    }

    return 0;
}

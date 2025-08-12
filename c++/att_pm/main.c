#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char matriz[20][5];
    int tam, linhas, i, j, k = 0;

    printf("Digite a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove quebra de linha do fgets

    tam = strlen(str);
    linhas = (tam + 4) / 5; // arredonda pra cima

    // Preenche a matriz linha a linha
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < 5; j++) {
            if (k < tam) {
                matriz[i][j] = str[k++];
            } else {
                matriz[i][j] = ' '; // completa com espaços
            }
        }
    }

    // Lê coluna por coluna e imprime
    for (j = 0; j < 5; j++) {
        for (i = 0; i < linhas; i++) {
            printf("%c", matriz[i][j]);
        }
        printf("*");
    }

    printf("\n");
    return 0;
}

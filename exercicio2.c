// 2. Faça um algoritmo com uma matriz utilizando alocação de memória dinâmica de tamanho variável(calloc) definido pelo usuário.
// No final apresente os valores informados e a multiplicação do todos eles. Lidere a memória.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int **matriz, i, j, linha, coluna, multi = 1;

    printf("Digite o numero de linhas de sua matriz: ");
    scanf("%d", &linha);
    printf("Digite o numero de colunas de sua matriz: ");
    scanf("%d", &coluna);

    matriz = (int**)calloc(linha,sizeof(int *));
    for ( i = 0; i < linha; i++){
        matriz[i] = (int *)calloc(coluna,sizeof(int));
    }

    for ( i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Digite o Valor (%d,%d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            multi *= matriz[i][j];
        }
    }

    printf("\nTotal do Produto: %d", multi);

    free(matriz);

}
// 1. Faça um algoritmo com uma matriz utilizando alocação de memória dinâmica de tamanho variável(malloc) definido pelo usuário.
// No final apresente os valores informados e a soma do todos eles. Lidere a memória.


#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int **matriz, i, j, linhas, colunas, soma = 0;
    
    // aqui o usuario decide o tamnho da matriz


    printf("Digite o numero linhas de sua matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas de sua matriz: ");
    scanf("%d", &colunas);

    matriz = (int **)malloc( linhas * sizeof(int *)); // aqui a memoria vai ser alocada baseada na quantidade de linhas
    for( i=0; i<linhas; i++ ){
        matriz[i] = (int *)malloc( colunas * sizeof(int)); // aqui vai alocar a memoria baseada na quantidade de colunas
    }

    for( i=0; i<linhas; i++ ){
             for( j=0; j<colunas; j++ ){
                printf("Digite o valor (%d,%d): ", i,j);
                scanf("%d",&matriz[i][j]);
             }
        }
   
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            soma += matriz[i][j];
        }
    }
    
    printf("\n\nSoma total: %d\n", soma);
  
    free(matriz);

}


#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, maior;

    printf("Digite os elementos da matriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }

    printf("O maior elemento da matriz eh: %d\n", maior);
    return 0;
}
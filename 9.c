
#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, temp;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inverter linhas
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3/2; j++){
            temp = matriz[i][j];
            matriz[i][j] = matriz[i][2-j];
            matriz[i][2-j] = temp;
        }
    }

    // Inverter colunas
    for(j = 0; j < 3; j++){
        for(i = 0; i < 3/2; i++){
            temp = matriz[i][j];
            matriz[i][j] = matriz[2-i][j];
            matriz[2-i][j] = temp;
        }
    }

    printf("Matriz apos inversao de linhas e colunas:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
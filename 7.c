
#include <stdio.h>

int main() {
    int matriz[2][2];
    int i, j;

    printf("Digite os elementos da matriz 2x2:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz digitada:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, diag_principal = 0, diag_secundaria = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        diag_principal += matriz[i][i];
        diag_secundaria += matriz[i][2-i];
    }

    printf("Soma da diagonal principal: %d\n", diag_principal);
    printf("Soma da diagonal secundaria: %d\n", diag_secundaria);

    return 0;
}
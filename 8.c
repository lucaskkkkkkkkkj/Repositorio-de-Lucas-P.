
#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, busca, cont = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o numero que deseja contar: ");
    scanf("%d", &busca);

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] == busca){
                cont++;
            }
        }
    }

    printf("O numero %d aparece %d vezes.\n", busca, cont);
    return 0;
}
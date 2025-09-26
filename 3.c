
#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, linha, soma = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite a linha que deseja somar (1 a 5): ");
    scanf("%d", &linha);

    for(j = 0; j < 5; j++){
        soma += matriz[linha-1][j];
    }

    printf("A soma dos elementos da linha %d eh: %d\n", linha, soma);
    return 0;
}
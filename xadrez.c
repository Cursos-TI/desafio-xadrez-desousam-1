#include <stdio.h>

int main() {
    
    // TORRE - FOR
    // 5 casas para a direita

    int i;

    printf("=== movimento da torre ===\n");

    for(i = 0; i < 5; i++) {
        printf("direita\n");
    }

    // BISPO - WHILE
    // 5 casas na diagonal (cima + direita)

    int j = 0;

    printf("\n=== movimento do bispo ===\n");

    while(j < 5) {
        printf("cima, direita\n");
        j++;
    }

    // RAINHA - DO-WHILE
    // 8 casa para esquerda

    int k = 0;

    printf("\n=== movimento da rainha ===\n");

    do {
        printf("esqueda\n");
        k++;
    } while (k < 8);

    return 0;
}

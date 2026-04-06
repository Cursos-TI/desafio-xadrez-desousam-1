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

    int b = 0;

    printf("\n=== movimento do bispo ===\n");

    while(b < 5) {
        printf("cima, direita\n");
        b++;
    }

    return 0;
}

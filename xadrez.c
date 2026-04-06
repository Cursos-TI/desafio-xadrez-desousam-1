#include <stdio.h>

// TORRE (RECURSIVIDADE)
void moverTorre(int casas){
    if(casas == 0) return; //caso base
    printf("direita\n");
    moverTorre(casas - 1); //chamada recursiva
}

// RAINHA (RECURSIVIDADE)
void moverRainha(int casas){
    if(casas == 0) return;
    printf("esquerda\n");
    moverRainha(casas - 1);
}

    return 0;
}

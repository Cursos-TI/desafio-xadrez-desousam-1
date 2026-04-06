#include <stdio.h>

// TORRE (RECURSIVIDADE)
void moverTorre(int casas){
    if(casas == 0) return; //caso base
    printf("direita\n");
    moverTorre(casas - 1); //chamada recursiva
}



    return 0;
}

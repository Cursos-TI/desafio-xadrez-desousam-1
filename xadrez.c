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

// BISPO (RECURSIVIDADE + LOOP ANINHADO)
void moverBispo(int casas){
    if(casas == 0) return;

    //loop externo (vertical)
    for(int i = 0; i < 1; i++){
        //loop interno (horizontal)
        for(int j = 0; j < 1; j++){
            printf("cima, direita\n");
        }
    }

    moverBispo(casas - 1);
}

    return 0;
}

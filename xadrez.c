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

// CAVALO (LOOPS COMPLEXOS)
void moverCavalo(){
    //2 para cima + 1 para direita
    int i, j;

    for (i = 0; i < 2; i++){
        for(j = 0; j < 1; j++){
            if(i < 2){
                printf("cima\n");
                continue; //continua o loop
            }
        }
    }
    // depois do movimento vertical
    printf("direita\n");
}

    return 0;
}

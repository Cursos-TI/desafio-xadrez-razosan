#include <stdio.h>

/*
    Programa: Simulação de movimentação de peças (MateCheck)
    Objetivo: Avaliar uso de estruturas de repetição para movimentação no jogo
*/

/* Constantes para quantidade de movimentos */
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {

    int contador;

    /* ===============================
       MOVIMENTAÇÃO DO BISPO
       5 casas na diagonal superior direita
       Utiliza estrutura FOR
       =============================== */
    printf("Movimentação do Bispo:\n");

    for (contador = 1; contador <= MOV_BISPO; contador++) {
        /* Diagonal = combinação de direções */
        printf("Cima Direita\n");
    }

    printf("\n");

    /* ===============================
       MOVIMENTAÇÃO DA TORRE
       5 casas para a direita
       Utiliza estrutura WHILE
       =============================== */
    printf("Movimentação da Torre:\n");

    contador = 1;
    while (contador <= MOV_TORRE) {
        printf("Direita\n");
        contador++;
    }

    printf("\n");

    /* ===============================
       MOVIMENTAÇÃO DA RAINHA
       8 casas para a esquerda
       Utiliza estrutura DO WHILE
       =============================== */
    printf("Movimentação da Rainha:\n");

    contador = 1;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= MOV_RAINHA);

    return 0;
}


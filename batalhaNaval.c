/*DESAFIO BATALHA NAVAL
DESENVOLVIDO POR: LUAN DE PAULA BORGES*/
#include <stdio.h>

int main() {
    int matriz[10][10] = {0}; // Inicializa a matriz com zeros
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'}; // Letras para as colunas

    // Alocando navio horizontal de tamanho 3 na linha 2, colunas 4 a 6
    for (int j = 3; j <= 5; j++) {
        matriz[1][j] = 3; // 3 representa o navio
    }
    // Alocando navio vertical de tamanho 3 na coluna 7, linhas 5 a 7
    for (int i = 4; i <= 6; i++) {
        matriz[i][6] = 3;
    }

    // Imprime cabeçalho (letras)
    printf("   ");
    for (int j = 0; j < 10; j++) { 
        printf(" %c", letras[j]); // Imprime letras de A a J
    }
    printf("\n"); // Pula uma linha após o cabeçalho

    // Imprime matriz com numeração das linhas
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i+1);
        for (int j = 0; j < 10; j++) {
            printf(" %d", matriz[i][j]); 
        }
        printf("\n"); // Imprime uma linha
    }

    return 0;
}
#include <stdio.h>

int main()
{
    // Inicializa o tabuleiro 10x10 com água (0) e cria quatro navios com tamanhos diferentes
    int tabela[10][10] = {0}, navio_a[3] = {3,3,3}, navio_b[2] = {3,3}, navio_c[4] = {3,3,3,3}, navio_d[3] = {3,3,3};

    // Posiciona navio_a horizontalmente na linha 2, começando na coluna 4
    for (int i = 0; i < sizeof(navio_a) / sizeof(navio_a[0]); i++) {
        tabela[2][4 + i] = navio_a[i];
    }

    // Posiciona navio_b verticalmente na coluna 8, começando na linha 5
    for (int i = 0; i < sizeof(navio_b) / sizeof(navio_b[0]); i++) {
        tabela[5 + i][8] = navio_b[i];
    }

    // Posiciona navio_c diagonalmente (direção sudeste), começando na posição [3][2]
    for (int i = 0; i < sizeof(navio_c) / sizeof(navio_c[0]); i++) {
        tabela[3 + i][2 + i] = navio_c[i];
    }

    // Posiciona navio_d diagonalmente (direção sudeste), começando na posição [6][1]
    for (int i = 0; i < sizeof(navio_d) / sizeof(navio_d[0]); i++) {
        tabela[6 + i][1 + i] = navio_d[i];
    }

    // Exibe o tabuleiro completo no console
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d  ", tabela[i][j]);
        }
        printf("\n");
    }

    return 0;
}
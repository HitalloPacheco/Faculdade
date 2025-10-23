#include <stdio.h>

int main()
{
    // Inicializa o tabuleiro 10x10 com água (0) e cria quatro navios com tamanhos diferentes
    int tabela[10][10] = {0}, navio_a[3] = {3,3,3}, navio_b[2] = {3,3}, navio_c[4] = {3,3,3,3}, navio_d[3] = {3,3,3};

    // Define coordenadas centrais [x, y] para cada habilidade
    int octaedro[2] = {1,0};
    int cruz[2] = {3,6};
    int cone[2] = {5, 5};

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

    // Aplica habilidade OCTAEDRO (formato losango 3x5) centrada em [1, 0]
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int x = octaedro[0] + j - 2, y = octaedro[1] + i - 1;
            // Verifica limites do tabuleiro
            if (x <= 9 && x >= 0 && y <= 9 && y >= 0) {
                // Condições para formar o losango
                if (((i == 0 || i == 2) && (j == 2)) || (i == 1 && j < 4 && j > 0)) {
                    tabela[y][x] = 5;
                } 
            }
        };
    }

    // Aplica habilidade CRUZ (formato + 3x5) centrada em [3, 6]
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int x = cruz[0] + j - 2, y = cruz[1] + i - 1;
            // Verifica limites do tabuleiro
            if (x <= 9 && x >= 0 && y <= 9 && y >= 0) {
                // Condições para formar a cruz (linha e coluna central)
                if (((i == 0 || i == 2) && (j == 2)) || (i == 1 && (j <= 4 && j >= 0))) {
                    tabela[y][x] = 5;
                } 
            }
        };
    }

    // Aplica habilidade CONE (formato triangular 3x5) com origem em [5, 5]
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            int x = cone[0] + j - 2, y = cone[1] + i;
            // Verifica limites do tabuleiro
            if (x <= 9 && x >= 0 && y <= 9 && y >= 0) {
                // Condição para formar o cone expandindo para baixo
                if (j > 1 - i && j < 3 + i) {
                    tabela[y][x] = 5;
                } 
            }
        };
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
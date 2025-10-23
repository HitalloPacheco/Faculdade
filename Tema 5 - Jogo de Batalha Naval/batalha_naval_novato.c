#include <stdio.h>

int main()
{
    // Inicializa o tabuleiro 10x10 com água (0) e cria dois navios com tamanhos diferentes
    int tabela[10][10] = {0}, navio_a[3] = {3,3,3}, navio_b[2] = {3,3};

    // Posiciona navio_a horizontalmente na linha 2, começando na coluna 3
    for (int i = 0; i < sizeof(navio_a) / sizeof(navio_a[0]); i++) {
        tabela[2][3 + i] = navio_a[i];
    }

    // Posiciona navio_b verticalmente na coluna 7, começando na linha 5
    for (int i = 0; i < sizeof(navio_b) / sizeof(navio_b[0]); i++) {
        tabela[5 + i][7] = navio_b[i];
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
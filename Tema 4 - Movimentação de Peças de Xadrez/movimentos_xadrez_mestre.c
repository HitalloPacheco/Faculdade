#include <stdio.h>

void movimento_torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movimento_torre(casas - 1);
    } else {
        return;
    }
}

void movimento_bispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        movimento_bispo(casas - 1);
    } else {
        return;
    }
}

void movimento_rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        movimento_rainha(casas - 1);
    } else {
        return;
    }
}

void movimento_cavalo(int movimentos) {
    if (movimentos > 0) {
        int i = 0;

        do {
            printf("Cima, ");
            i++;
        } while (i < 2);
        
        printf("Direita\n");
        movimento_cavalo(movimentos - 1);
    } else {
        return;
    }
}

int main()
{
    printf("Movimentos da Torre:\n\n");
    movimento_torre(5);

    printf("\nMovimentos do Bispo:\n\n");
    movimento_bispo(5);

    printf("\nMovimentos da Rainha:\n\n");
    movimento_rainha(8);

    printf("\nMovimentos do Cavalo:\n\n");
    movimento_cavalo(4);

  return 0;
}
#include <stdio.h>

// Função recursiva: Torre move-se horizontalmente
void movimento_torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movimento_torre(casas - 1); // Chama a si mesma com casas-1
    } else {
        return; // Caso base: para a recursão
    }
}

// Função recursiva: Bispo move-se diagonalmente
void movimento_bispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        movimento_bispo(casas - 1); // Recursão
    } else {
        return; // Caso base
    }
}

// Função recursiva: Rainha move-se para esquerda
void movimento_rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        movimento_rainha(casas - 1); // Recursão
    } else {
        return; // Caso base
    }
}

// Função recursiva: Cavalo move-se em "L"
void movimento_cavalo(int movimentos) {
    if (movimentos > 0) {
        int i = 0;
        
        // Loop para movimento vertical (2 casas)
        do {
            printf("Cima, ");
            i++;
        } while (i < 2);
        
        printf("Direita\n"); // Movimento horizontal (1 casa)
        movimento_cavalo(movimentos - 1); // Recursão
    } else {
        return; // Caso base
    }
}

int main()
{
    // Executa 5 movimentos da Torre
    printf("Movimentos da Torre:\n\n");
    movimento_torre(5);

    // Executa 5 movimentos do Bispo
    printf("\nMovimentos do Bispo:\n\n");
    movimento_bispo(5);

    // Executa 8 movimentos da Rainha
    printf("\nMovimentos da Rainha:\n\n");
    movimento_rainha(8);

    // Executa 4 movimentos em "L" do Cavalo
    printf("\nMovimentos do Cavalo:\n\n");
    movimento_cavalo(4);

    return 0;
}
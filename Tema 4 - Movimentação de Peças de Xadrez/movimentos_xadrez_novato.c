#include <stdio.h>

int main()
{
    int i = 0; // Contador inicializado

    // Torre: movimento horizontal
    printf("Movimentos da Torre:\n\n");
    do {
        printf("Direita\n");
        i++;
    } while (i < 5); // Repete 5 vezes

    // Bispo: movimento diagonal
    printf("\nMovimentos do Bispo:\n\n");
    i = 0; // Reinicia contador
    do {
        printf("Cima, Direita\n");
        i++;
    } while (i < 5); // Repete 5 vezes

    // Rainha: movimento para esquerda
    printf("\nMovimentos da Rainha:\n\n");
    i = 0; // Reinicia contador
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8); // Repete 8 vezes

    return 0;
}
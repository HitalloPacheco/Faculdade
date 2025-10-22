#include <stdio.h>

int main()
{
    int i = 0, j = 0; // Declaração de dois contadores

    // Torre: movimento horizontal (5x)
    printf("Movimentos da Torre:\n\n");
    do {
        printf("Direita\n");
        i++;
    } while (i < 5);

    // Bispo: movimento diagonal (5x)
    printf("\nMovimentos do Bispo:\n\n");
    i = 0; // Reinicia i
    do {
        printf("Cima, Direita\n");
        i++;
    } while (i < 5);

    // Rainha: movimento para esquerda (8x)
    printf("\nMovimentos da Rainha:\n\n");
    i = 0; // Reinicia i
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    // Cavalo: movimento em "L" (1x apenas)
    printf("\nMovimentos do Cavalo:\n\n");
    i = 0; // Reinicia i
    for (i = 0; i < 1; i++) { // Loop for executa apenas 1 vez
        do {
            printf("baixo\n");
            j++; // Incrementa j
        } while (j < 2); // Imprime "baixo" 2 vezes
        
        printf("esquerda\n"); // Imprime "esquerda" 1 vez
    } 
    // Resultado: "baixo" 2x, depois "esquerda" 1x (movimento em L)

    return 0;
}
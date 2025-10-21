#include <stdio.h>
#include <string.h>

int main()
{
    // Declaração de variáveis da Carta 1
    char estado1, codigo_da_carta1[3], cidade1[20];
    int populacao1, pontos_turisticos1;
    float pib1, area1, densidade_populacional1, pib_per_capita1, super_poder1;
    
    // Declaração de variáveis da Carta 2
    char estado2, codigo_da_carta2[3], cidade2[20];
    int populacao2, pontos_turisticos2;
    float pib2, area2, densidade_populacional2, pib_per_capita2, super_poder2;
    
    // ========== ENTRADA DE DADOS - CARTA 1 ==========
    printf("Carta 1: \n");
    printf("Digite o estado: \n");
    scanf("%c", &estado1);
    
    printf("Digite o codigo: \n");
    scanf("%s", codigo_da_carta1);
    
    printf("Digite o nome da cidade: \n");
    getchar();  // Limpa buffer
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';  // Remove '\n'
    
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a area: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Cálculos dos atributos derivados da Carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + pontos_turisticos1 + pib1 + area1 + pib_per_capita1 - densidade_populacional1;
    
    // ========== ENTRADA DE DADOS - CARTA 2 ==========
    printf("\nCarta 2: \n");
    printf("Digite o estado: \n");
    getchar();  // Limpa buffer
    scanf("%c", &estado2);
    
    printf("Digite o codigo: \n");
    scanf("%s", codigo_da_carta2);
    
    printf("Digite o nome da cidade: \n");
    getchar();  // Limpa buffer
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';  // Remove '\n'
    
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a area: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos dos atributos derivados da Carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + pontos_turisticos2 + pib2 + area2 + pib_per_capita2 - densidade_populacional2;
    
    // ========== EXIBIÇÃO DAS CARTAS ==========
    printf("\n========================================\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo_da_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    
    printf("\n========================================\n\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo_da_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("\n========================================\n\n");

    // ========== COMPARAÇÃO DOS ATRIBUTOS ==========
    printf("Comparação de Cartas:\n");
    
    // População: maior vence
    printf("População: Carta %d venceu (%d)\n", 
           populacao1 > populacao2 ? 1 : 2, 
           populacao1 > populacao2 ? 1 : 0);
    
    // Área: maior vence
    printf("Área: Carta %d venceu (%d)\n", 
           area1 > area2 ? 1 : 2, 
           area1 > area2 ? 1 : 0);
    
    // PIB: maior vence
    printf("PIB: Carta %d venceu (%d)\n", 
           pib1 > pib2 ? 1 : 2, 
           pib1 > pib2 ? 1 : 0);
    
    // Pontos Turísticos: maior vence
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, 
           pontos_turisticos1 > pontos_turisticos2 ? 1 : 0);
    
    // Densidade Populacional: menor vence (menos congestionamento)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           densidade_populacional1 < densidade_populacional2 ? 1 : 2, 
           densidade_populacional1 < densidade_populacional2 ? 1 : 0);
    
    // PIB per Capita: maior vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           pib_per_capita1 > pib_per_capita2 ? 1 : 2, 
           pib_per_capita1 > pib_per_capita2 ? 1 : 0);
    
    // Super Poder: maior vence (atributo composto)
    printf("Super Poder: Carta %d venceu (%d)\n", 
           super_poder1 > super_poder2 ? 1 : 2, 
           super_poder1 > super_poder2 ? 1 : 0);
    
    printf("\n========================================\n\n");
    
    return 0;
}
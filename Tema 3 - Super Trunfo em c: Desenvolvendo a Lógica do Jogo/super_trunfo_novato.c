#include <stdio.h>
#include <string.h>

int main()
{  
    // Variáveis da Carta 1
    char estado1[3], codigo_da_carta1[3], cidade1[20];
    int populacao1,pontos_turisticos1;
    float pib1, area1, densidade_populacional1, pib_per_capita1, super_poder1;
    
    // Variáveis da Carta 2
    char estado2[3], codigo_da_carta2[3], cidade2[20];
    int populacao2, pontos_turisticos2;
    float pib2, area2, densidade_populacional2, pib_per_capita2, super_poder2;
    
    // ========== ENTRADA - CARTA 1 ==========
    printf("=========================================\n");
    printf("    BEM-VINDO AO SUPER TRUNFO CIDADES    \n");
    printf("=========================================\n\n");
    
    printf(">>> CARTA 1 <<<\n");
    printf("----------------------------\n");
    
    printf("Digite a sigla do estado (ex: RJ, SP): ");
    scanf("%s", estado1);
    
    printf("Digite o código da carta (ex: 01, 02): ");
    scanf("%s", codigo_da_carta1);
    
    printf("Digite o nome da cidade: ");
    getchar();  // Limpa buffer
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';  // Remove '\n'
    
    printf("Digite a população (habitantes): ");
    scanf("%d", &populacao1);
    
    printf("Digite a área territorial (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da Carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + pontos_turisticos1 + pib1 + area1 + pib_per_capita1 - densidade_populacional1;
    
    // ========== ENTRADA - CARTA 2 ==========
    printf("\n>>> CARTA 2 <<<\n");
    printf("----------------------------\n");
    
    printf("Digite a sigla do estado (ex: RJ, SP): ");
    getchar();  // Limpa buffer
    scanf("%s", estado2);
    
    printf("Digite o código da carta (ex: 01, 02): ");
    scanf("%s", codigo_da_carta2);
    
    printf("Digite o nome da cidade: ");
    getchar();  // Limpa buffer
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';  // Remove '\n'
    
    printf("Digite a população (habitantes): ");
    scanf("%d", &populacao2);
    
    printf("Digite a área territorial (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + pontos_turisticos2 + pib2 + area2 + pib_per_capita2 - densidade_populacional2;

    // ========== EXIBIÇÃO E COMPARAÇÃO ==========
    printf("\n========================================\n");
    printf("          COMPARAÇÃO DE CARTAS           \n");
    printf("========================================\n");
    
    printf("\nAtributo comparado: DENSIDADE POPULACIONAL\n");
    printf("------------------------------------------\n");
    printf("Carta 1 - %s (%s): %.2f habitantes/km²\n", cidade1, estado1, densidade_populacional1);
    printf("Carta 2 - %s (%s): %.2f habitantes/km²\n", cidade2, estado2, densidade_populacional2);
    
    // Menor densidade vence
    printf("\nResultado: Carta %d (%s) venceu!\n", 
           densidade_populacional1 < densidade_populacional2 ? 1 : 2, 
           densidade_populacional1 < densidade_populacional2 ? cidade1 : cidade2);
    
    printf("\n========================================\n");
    printf("           OBRIGADO POR JOGAR           \n");
    printf("========================================\n");
    
    return 0;
}
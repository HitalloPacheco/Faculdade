#include <stdio.h>
#include <string.h>

/*
 * Programa: Super Trunfo - Cidades
 * Descrição: Jogo de cartas onde duas cidades competem com base em atributos demográficos e econômicos
 */

int main()
{  
    // ========== DECLARAÇÃO DE VARIÁVEIS DA CARTA 1 ==========
    char estado1[3];                    // Sigla do estado (ex: RJ, SP)
    char codigo_da_carta1[3];           // Código numérico da carta
    char cidade1[20];                   // Nome da cidade
    int populacao1;                     // População total da cidade
    int pontos_turisticos1;             // Quantidade de pontos turísticos
    float pib1;                          // PIB em bilhões de reais
    float area1;                        // Área territorial em km²
    float densidade_populacional1;      // Habitantes por km²
    float pib_per_capita1;              // PIB dividido pela população (em bilhões per capita)
    float super_poder1;                 // Atributo especial que combina todos os indicadores
    
    // ========== DECLARAÇÃO DE VARIÁVEIS DA CARTA 2 ==========
    char estado2[3];                    // Sigla do estado (ex: RJ, SP)
    char codigo_da_carta2[3];           // Código numérico da carta
    char cidade2[20];                   // Nome da cidade
    int populacao2;                     // População total da cidade
    int pontos_turisticos2;             // Quantidade de pontos turísticos
    float pib2;                         // PIB em bilhões de reais
    float area2;                        // Área territorial em km²
    float densidade_populacional2;      // Habitantes por km²
    float pib_per_capita2;              // PIB dividido pela população (em bilhões per capita)
    float super_poder2;                 // Atributo especial que combina todos os indicadores
    
    // ========== ENTRADA DE DADOS DA CARTA 1 ==========
    printf("=========================================\n");
    printf("    BEM-VINDO AO SUPER TRUNFO CIDADES    \n");
    printf("=========================================\n\n");
    
    printf(">>> CARTA 1 <<<\n");
    printf("----------------------------\n");
    
    // Entrada do estado
    printf("Digite a sigla do estado (ex: RJ, SP): ");
    scanf("%s", estado1);
    
    // Entrada do código da carta
    printf("Digite o código da carta (ex: 01, 02): ");
    scanf("%s", codigo_da_carta1);
    
    // Entrada do nome da cidade
    printf("Digite o nome da cidade: ");
    getchar();  // Limpa o buffer do teclado
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';  // Remove o '\n' do final
    
    // Entrada da população
    printf("Digite a população (habitantes): ");
    scanf("%d", &populacao1);
    
    // Entrada da área
    printf("Digite a área territorial (km²): ");
    scanf("%f", &area1);
    
    // Entrada do PIB
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    // Entrada dos pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // ========== CÁLCULOS DOS ATRIBUTOS DA CARTA 1 ==========
    // Densidade populacional: população dividida pela área
    densidade_populacional1 = populacao1 / area1;
    
    // PIB per capita: PIB total dividido pela população
    pib_per_capita1 = pib1 / populacao1;
    
    // Super Poder: fórmula que combina todos os atributos
    // Quanto maior população, PIB, área e pontos turísticos, melhor
    // Densidade muito alta é penalizada (subtração)
    super_poder1 = populacao1 + pontos_turisticos1 + pib1 + area1 + pib_per_capita1 - densidade_populacional1;
    
    // ========== ENTRADA DE DADOS DA CARTA 2 ==========
    printf("\n>>> CARTA 2 <<<\n");
    printf("----------------------------\n");
    
    // Entrada do estado
    printf("Digite a sigla do estado (ex: RJ, SP): ");
    getchar();  // Limpa o buffer do teclado
    scanf("%s", estado2);
    
    // Entrada do código da carta
    printf("Digite o código da carta (ex: 01, 02): ");
    scanf("%s", codigo_da_carta2);
    
    // Entrada do nome da cidade
    printf("Digite o nome da cidade: ");
    getchar();  // Limpa o buffer do teclado
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';  // Remove o '\n' do final
    
    // Entrada da população
    printf("Digite a população (habitantes): ");
    scanf("%d", &populacao2);
    
    // Entrada da área
    printf("Digite a área territorial (km²): ");
    scanf("%f", &area2);
    
    // Entrada do PIB
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    // Entrada dos pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // ========== CÁLCULOS DOS ATRIBUTOS DA CARTA 2 ==========
    // Densidade populacional: população dividida pela área
    densidade_populacional2 = populacao2 / area2;
    
    // PIB per capita: PIB total dividido pela população
    pib_per_capita2 = pib2 / populacao2;
    
    // Super Poder: fórmula que combina todos os atributos
    super_poder2 = populacao2 + pontos_turisticos2 + pib2 + area2 + pib_per_capita2 - densidade_populacional2;

    // ========== EXIBIÇÃO DOS RESULTADOS ==========
    printf("\n========================================\n");
    printf("          COMPARAÇÃO DE CARTAS           \n");
    printf("========================================\n");
    
    // Comparação baseada em Densidade Populacional
    // Observação: MENOR densidade populacional vence (menos congestionamento)
    printf("\nAtributo comparado: DENSIDADE POPULACIONAL\n");
    printf("------------------------------------------\n");
    printf("Carta 1 - %s (%s): %.2f habitantes/km²\n", cidade1, estado1, densidade_populacional1);
    printf("Carta 2 - %s (%s): %.2f habitantes/km²\n", cidade2, estado2, densidade_populacional2);
    
    // Determina o vencedor (menor densidade vence)
    printf("\nResultado: Carta %d (%s) venceu!\n", densidade_populacional1 < densidade_populacional2 ? 1 : 2, 
       densidade_populacional1 < densidade_populacional2 ? cidade1 : cidade2);
    
    printf("\n========================================\n");
    printf("           OBRIGADO POR JOGAR           \n");
    printf("========================================\n");
    
    return 0;
}
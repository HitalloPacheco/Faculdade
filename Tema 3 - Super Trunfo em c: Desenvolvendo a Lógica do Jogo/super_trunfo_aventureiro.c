#include <stdio.h>
#include <string.h>

int main()
{  
    // Variáveis de controle
    int atributo_escolhido, vencedor;
    char atributo_nome[30];
    float valor_atributo1, valor_atributo2;

    // Variáveis da Carta 1
    char estado1[3], codigo_da_carta1[3], cidade1[20];
    int populacao1, pontos_turisticos1;
    float pib1, area1, densidade_populacional1, pib_per_capita1, super_poder1;
    
    // Variáveis da Carta 2
    char estado2[3], codigo_da_carta2[3], cidade2[20];
    int populacao2, pontos_turisticos2;
    float pib2, area2, densidade_populacional2, pib_per_capita2, super_poder2;
    
    // ========== ENTRADA - CARTA 1 ==========
    printf("========================================\n");
    printf("          SUPER TRUNFO CIDADES          \n");
    printf("========================================\n\n");
    
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

    // ========== ESCOLHA DO ATRIBUTO ==========
    printf("\nEscolha o atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo_escolhido);

    // ========== COMPARAÇÃO DOS ATRIBUTOS ==========
    switch (atributo_escolhido)
    {
    case 1:  // População: maior vence
        vencedor = populacao1 > populacao2 ? 1 : populacao1 < populacao2 ? 2 : 0;
        valor_atributo1 = populacao1;
        valor_atributo2 = populacao2;
        // Utilizei strcpy() para copiar string, já que atribuição direta (=) não funciona com arrays
        strcpy(atributo_nome, "População");
        break;
    case 2:  // Área: maior vence
        vencedor = area1 > area2 ? 1 : area1 < area2 ? 2 : 0;
        valor_atributo1 = area1;
        valor_atributo2 = area2;
        strcpy(atributo_nome, "Área");
        break;
    case 3:  // PIB: maior vence
        vencedor = pib1 > pib2 ? 1 : pib1 < pib2 ? 2 : 0;
        valor_atributo1 = pib1;
        valor_atributo2 = pib2;
        strcpy(atributo_nome, "PIB");
        break;
    case 4:  // Pontos Turísticos: maior vence
        vencedor = pontos_turisticos1 > pontos_turisticos2 ? 1 : pontos_turisticos1 < pontos_turisticos2 ? 2 : 0;
        valor_atributo1 = pontos_turisticos1;
        valor_atributo2 = pontos_turisticos2;
        strcpy(atributo_nome, "Pontos Turísticos");
        break;
    case 5:  // Densidade: menor vence
        vencedor = densidade_populacional1 < densidade_populacional2 ? 1 : densidade_populacional1 > densidade_populacional2 ? 2 : 0;
        valor_atributo1 = densidade_populacional1;
        valor_atributo2 = densidade_populacional2;
        strcpy(atributo_nome, "Densidade Populacional");
        break;
    default:
        printf("Opção inválida!\n");
        return 1;
    }

    // ========== EXIBIÇÃO DO RESULTADO ==========
    printf("\n========================================\n");
    printf("%s - %s\n", cidade1, cidade2);
    printf("Atributo escolhido: %s\n", atributo_nome);
    printf("Valores: %.2f - %.2f\n", valor_atributo1, valor_atributo2);

    switch (vencedor)
    {
    case 0:
        printf("Resultado: Empate!\n");
        break;
    case 1:
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        break;
    case 2:
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        break;
    }
    printf("========================================\n");
    
    return 0;
}
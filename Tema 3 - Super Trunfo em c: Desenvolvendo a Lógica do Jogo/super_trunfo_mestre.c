#include <stdio.h>
#include <string.h>

int main()
{  
    // Variáveis de controle
    int atributo1_escolhido, atributo2_escolhido;
    int vencedor_atributo1, vencedor_atributo2;
    char atributo1_nome[30], atributo2_nome[30];
    float valor_atributo1_carta1, valor_atributo1_carta2;
    float valor_atributo2_carta1, valor_atributo2_carta2;
    float soma_carta1, soma_carta2;

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

    // ========== ESCOLHA DO PRIMEIRO ATRIBUTO ==========
    printf("\n========================================\n");
    printf("Escolha o PRIMEIRO atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo1_escolhido);

    // Validação do primeiro atributo
    if (atributo1_escolhido < 1 || atributo1_escolhido > 7) {
        printf("Opção inválida!\n");
        return 1;
    }

    // ========== ESCOLHA DO SEGUNDO ATRIBUTO (MENU DINÂMICO) ==========
    printf("\n========================================\n");
    printf("Escolha o SEGUNDO atributo para comparação:\n");
    
    // Menu dinâmico: não mostra o atributo já escolhido
    if (atributo1_escolhido != 1) printf("1. População\n");
    if (atributo1_escolhido != 2) printf("2. Área\n");
    if (atributo1_escolhido != 3) printf("3. PIB\n");
    if (atributo1_escolhido != 4) printf("4. Pontos Turísticos\n");
    if (atributo1_escolhido != 5) printf("5. Densidade Populacional\n");
    if (atributo1_escolhido != 6) printf("6. PIB per Capita\n");
    if (atributo1_escolhido != 7) printf("7. Super Poder\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo2_escolhido);

    // Validação: não pode ser o mesmo atributo
    if (atributo2_escolhido == atributo1_escolhido) {
        printf("Erro: Você não pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }
    
    if (atributo2_escolhido < 1 || atributo2_escolhido > 7) {
        printf("Opção inválida!\n");
        return 1;
    }

    // ========== COMPARAÇÃO DO PRIMEIRO ATRIBUTO ==========
    switch (atributo1_escolhido)
    {
    case 1:  // População: maior vence
        vencedor_atributo1 = populacao1 > populacao2 ? 1 : populacao1 < populacao2 ? 2 : 0;
        valor_atributo1_carta1 = populacao1;
        valor_atributo1_carta2 = populacao2;
        // Utilizei strcpy() para copiar string, já que atribuição direta (=) não funciona com arrays
        strcpy(atributo1_nome, "População");
        break;
    case 2:  // Área: maior vence
        vencedor_atributo1 = area1 > area2 ? 1 : area1 < area2 ? 2 : 0;
        valor_atributo1_carta1 = area1;
        valor_atributo1_carta2 = area2;
        strcpy(atributo1_nome, "Área");
        break;
    case 3:  // PIB: maior vence
        vencedor_atributo1 = pib1 > pib2 ? 1 : pib1 < pib2 ? 2 : 0;
        valor_atributo1_carta1 = pib1;
        valor_atributo1_carta2 = pib2;
        strcpy(atributo1_nome, "PIB");
        break;
    case 4:  // Pontos Turísticos: maior vence
        vencedor_atributo1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : pontos_turisticos1 < pontos_turisticos2 ? 2 : 0;
        valor_atributo1_carta1 = pontos_turisticos1;
        valor_atributo1_carta2 = pontos_turisticos2;
        strcpy(atributo1_nome, "Pontos Turísticos");
        break;
    case 5:  // Densidade: menor vence
        vencedor_atributo1 = densidade_populacional1 < densidade_populacional2 ? 1 : densidade_populacional1 > densidade_populacional2 ? 2 : 0;
        valor_atributo1_carta1 = densidade_populacional1;
        valor_atributo1_carta2 = densidade_populacional2;
        strcpy(atributo1_nome, "Densidade Populacional");
        break;
    case 6:  // PIB per Capita: maior vence
        vencedor_atributo1 = pib_per_capita1 > pib_per_capita2 ? 1 : pib_per_capita1 < pib_per_capita2 ? 2 : 0;
        valor_atributo1_carta1 = pib_per_capita1;
        valor_atributo1_carta2 = pib_per_capita2;
        strcpy(atributo1_nome, "PIB per Capita");
        break;
    case 7:  // Super Poder: maior vence
        vencedor_atributo1 = super_poder1 > super_poder2 ? 1 : super_poder1 < super_poder2 ? 2 : 0;
        valor_atributo1_carta1 = super_poder1;
        valor_atributo1_carta2 = super_poder2;
        strcpy(atributo1_nome, "Super Poder");
        break;
    }

    // ========== COMPARAÇÃO DO SEGUNDO ATRIBUTO ==========
    switch (atributo2_escolhido)
    {
    case 1:  // População: maior vence
        vencedor_atributo2 = populacao1 > populacao2 ? 1 : populacao1 < populacao2 ? 2 : 0;
        valor_atributo2_carta1 = populacao1;
        valor_atributo2_carta2 = populacao2;
        strcpy(atributo2_nome, "População");
        break;
    case 2:  // Área: maior vence
        vencedor_atributo2 = area1 > area2 ? 1 : area1 < area2 ? 2 : 0;
        valor_atributo2_carta1 = area1;
        valor_atributo2_carta2 = area2;
        strcpy(atributo2_nome, "Área");
        break;
    case 3:  // PIB: maior vence
        vencedor_atributo2 = pib1 > pib2 ? 1 : pib1 < pib2 ? 2 : 0;
        valor_atributo2_carta1 = pib1;
        valor_atributo2_carta2 = pib2;
        strcpy(atributo2_nome, "PIB");
        break;
    case 4:  // Pontos Turísticos: maior vence
        vencedor_atributo2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : pontos_turisticos1 < pontos_turisticos2 ? 2 : 0;
        valor_atributo2_carta1 = pontos_turisticos1;
        valor_atributo2_carta2 = pontos_turisticos2;
        strcpy(atributo2_nome, "Pontos Turísticos");
        break;
    case 5:  // Densidade: menor vence
        vencedor_atributo2 = densidade_populacional1 < densidade_populacional2 ? 1 : densidade_populacional1 > densidade_populacional2 ? 2 : 0;
        valor_atributo2_carta1 = densidade_populacional1;
        valor_atributo2_carta2 = densidade_populacional2;
        strcpy(atributo2_nome, "Densidade Populacional");
        break;
    case 6:  // PIB per Capita: maior vence
        vencedor_atributo2 = pib_per_capita1 > pib_per_capita2 ? 1 : pib_per_capita1 < pib_per_capita2 ? 2 : 0;
        valor_atributo2_carta1 = pib_per_capita1;
        valor_atributo2_carta2 = pib_per_capita2;
        strcpy(atributo2_nome, "PIB per Capita");
        break;
    case 7:  // Super Poder: maior vence
        vencedor_atributo2 = super_poder1 > super_poder2 ? 1 : super_poder1 < super_poder2 ? 2 : 0;
        valor_atributo2_carta1 = super_poder1;
        valor_atributo2_carta2 = super_poder2;
        strcpy(atributo2_nome, "Super Poder");
        break;
    }

    // ========== SOMA DOS ATRIBUTOS ==========
    soma_carta1 = valor_atributo1_carta1 + valor_atributo2_carta1;
    soma_carta2 = valor_atributo1_carta2 + valor_atributo2_carta2;

    // ========== EXIBIÇÃO DO RESULTADO ==========
    printf("\n========================================\n");
    printf("         RESULTADO DA COMPARAÇÃO        \n");
    printf("========================================\n\n");
    
    printf("Cidades: %s vs %s\n\n", cidade1, cidade2);
    
    // Primeiro atributo
    printf("--- %s ---\n", atributo1_nome);
    printf("Carta 1 (%s): %.2f\n", cidade1, valor_atributo1_carta1);
    printf("Carta 2 (%s): %.2f\n", cidade2, valor_atributo1_carta2);
    if (vencedor_atributo1 == 1) {
        printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
    } else if (vencedor_atributo1 == 2) {
        printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
    } else {
        printf("Resultado: Empate\n\n");
    }
    
    // Segundo atributo
    printf("--- %s ---\n", atributo2_nome);
    printf("Carta 1 (%s): %.2f\n", cidade1, valor_atributo2_carta1);
    printf("Carta 2 (%s): %.2f\n", cidade2, valor_atributo2_carta2);
    if (vencedor_atributo2 == 1) {
        printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
    } else if (vencedor_atributo2 == 2) {
        printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
    } else {
        printf("Resultado: Empate\n\n");
    }
    
    // Soma total
    printf("========================================\n");
    printf("--- SOMA DOS ATRIBUTOS ---\n");
    printf("Carta 1 (%s): %.2f + %.2f = %.2f\n", cidade1, valor_atributo1_carta1, valor_atributo2_carta1, soma_carta1);
    printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", cidade2, valor_atributo1_carta2, valor_atributo2_carta2, soma_carta2);
    printf("\n");
    
    // Resultado final
    if (soma_carta1 > soma_carta2) {
        printf("Resultado final: Carta 1 (%s) venceu!\n", cidade1);
    } else if (soma_carta2 > soma_carta1) {
        printf("Resultado final: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado final: Empate!\n");
    }
    
    printf("========================================\n");
    
    return 0;
}
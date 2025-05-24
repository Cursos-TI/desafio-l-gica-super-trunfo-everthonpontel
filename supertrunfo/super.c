#include <stdio.h>

int main() {
    // ===== Dados da Carta 1 
    char nome1[] = "São Paulo";
    int populacao1 = 11000000;
    float area1 = 240.0;
    float pib1 = 200.0;
    int pontos1 = 4;
    float densidade1 = (float)populacao1 / area1;

    // ===== Dados da Carta 2 
    char nome2[] = "Rio de Janeiro";
    int populacao2 = 8000000;
    float area2 = 430.0;
    float pib2 = 250.0;
    int pontos2 = 2;
    float densidade2 = (float)populacao2 / area2;

    // Mostrar os dados
    printf("========== CARTA 1 ==========\n");
    printf("Nome: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos turísticos: %d\nDensidade: %.2f hab/km²\n",
           nome1, populacao1, area1, pib1, pontos1, densidade1);
    
    printf("\n========== CARTA 2 ==========\n");
    printf("Nome: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos turísticos: %d\nDensidade: %.2f hab/km²\n\n",
           nome2, populacao2, area2, pib2, pontos2, densidade2);

    int escolha1 = 0, escolha2 = 0;

    //  primeiro atributo
    printf("===== MENU DE COMPARAÇÃO - Escolha o 1º Atributo =====\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica (vence o menor)\n");
    printf("Digite sua opção: ");
    scanf("%d", &escolha1);

    // Validação  da 1ª escolha
    if (escolha1 < 1 || escolha1 > 5) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Menu da 2ª escolha
    printf("\n===== Escolha o 2º Atributo (diferente do primeiro) =====\n");
    for (int i = 1; i <= 5; i++) {
        if (i == escolha1) continue;
        switch (i) {
            case 1: printf("%d - População\n", i); break;
            case 2: printf("%d - Área\n", i); break;
            case 3: printf("%d - PIB\n", i); break;
            case 4: printf("%d - Pontos turísticos\n", i); break;
            case 5: printf("%d - Densidade demográfica (vence o menor)\n", i); break;
        }
    }
    printf("Digite sua opção: ");
    scanf("%d", &escolha2);

    //  2ª escolha é válida e diferente da 1ª
    if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        printf("Opção inválida ou repetida!\n");
        return 1;
    }

    // ===== Comparação dos dois atributos escolhidos =====
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    char nome_atributo1[30], nome_atributo2[30];
    int inverso1 = 0, inverso2 = 0; // indica se a comparação é "menor vence"

    // Atribuição dos valores do primeiro atributo
    switch (escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; 
        sprintf(nome_atributo1, "População"); break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; 
        sprintf(nome_atributo1, "Área"); break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; 
        sprintf(nome_atributo1, "PIB"); break;
        case 4: valor1_carta1 = pontos1; valor1_carta2 = pontos2; 
        sprintf(nome_atributo1, "Pontos turísticos"); break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2;
         sprintf(nome_atributo1, "Densidade demográfica"); inverso1 = 1; break;
    }

    // Atribuição dos valores do segundo atributo
    switch (escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2;
        sprintf(nome_atributo2, "População"); break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; 
        sprintf(nome_atributo2, "Área"); break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; 
        sprintf(nome_atributo2, "PIB"); break;
        case 4: valor2_carta1 = pontos1; valor2_carta2 = pontos2; 
        sprintf(nome_atributo2, "Pontos turísticos"); break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; 
        sprintf(nome_atributo2, "Densidade demográfica"); inverso2 = 1; break;
    }

    // Exibir valores
    printf("\n===== COMPARAÇÃO =====\n");
    printf("Atributo 1: %s\n", nome_atributo1);
    printf("%s: %.2f | %s: %.2f\n", nome1, valor1_carta1, nome2, valor1_carta2);

    printf("Atributo 2: %s\n", nome_atributo2);
    printf("%s: %.2f | %s: %.2f\n", nome1, valor2_carta1, nome2, valor2_carta2);

    // Comparações
    float soma1 = 0, soma2 = 0;

    soma1 += valor1_carta1;
    soma2 += valor1_carta2;
    soma1 += valor2_carta1;
    soma2 += valor2_carta2;

    //  "menor vence" para densidade
    if (inverso1 && valor1_carta1 < valor1_carta2) soma1 += 10000;
    else if (inverso1 && valor1_carta2 < valor1_carta1) soma2 += 10000;

    if (inverso2 && valor2_carta1 < valor2_carta2) soma1 += 10000;
    else if (inverso2 && valor2_carta2 < valor2_carta1) soma2 += 10000;

    //  soma
    printf("\n===== RESULTADO FINAL =====\n");
    printf("%s - Soma dos atributos: %.2f\n", nome1, soma1);
    printf("%s - Soma dos atributos: %.2f\n", nome2, soma2);

    if (soma1 > soma2) {
        printf("VENCEDOR: %s\n", nome1);
    } else if (soma2 > soma1) {
        printf("VENCEDOR: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}



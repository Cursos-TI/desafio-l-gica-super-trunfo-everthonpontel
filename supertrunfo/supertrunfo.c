#include <stdio.h>

int main() {
   
    // Carta 1
   
    float populacao = 11.0000;
    float area = 240.000;
    float pib = 200.0000;
    float pontos_turisticos = 4.0;
    float densidade_populacional = area / populacao;
    float PIB_per_capita = pib / populacao;
    float inverso_densidade = 1.0 / densidade_populacional;
    //calculo do super poder
    float super_poder = populacao + area + pib + pontos_turisticos + PIB_per_capita + inverso_densidade;

    printf("Carta 1\n");
    printf("Estado: A \n");
    printf("Codigo: A01 \n");
    printf("Nome Da Cidade: São Paulo \n");
    printf("População: %.4f\n", populacao);
    printf("Área: %.3f km²\n", area);  
    printf("PIB: R$ %.2f bilhões\n", pib);  
    printf("Pontos turísticos: %.3f\n", pontos_turisticos);
    printf("Densidade Populacional: %.3f km²/hab\n", densidade_populacional);
    printf("PIB per capita: R$ %.3f reais\n", PIB_per_capita);
    printf("Super Poder: %.3f\n", super_poder);

    printf("=====================\n\n");

    // Carta 2
    float populacao_ = 80;
    float area_ = 430.0000;
    float pib_ = 250.0000;
    float pontos__turisticos = 2.0;
    float densidade_populacional_ = area_ / populacao_;
    float PIB_per_capita_ = pib_ / populacao_;
    float inverso__densidade = 1.0 / densidade_populacional_; // CORRIGIDO AQUI
    //calculo do super poder
    float super__poder = populacao_ + area_ + pib_ + pontos__turisticos + PIB_per_capita_ + inverso__densidade;

    printf("Carta 2\n");
    printf("Estado: B \n");
    printf("Codigo: B01 \n");
    printf("Nome Da Cidade: Rio De Janeiro \n");
    printf("População: %.4f\n", populacao_);
    printf("Área: %.3f km²\n", area_);  
    printf("PIB: R$ %.2f bilhões\n", pib_);  
    printf("Pontos turísticos: %.3f\n", pontos__turisticos);
    printf("Densidade Populacional: %.3f km²\n", densidade_populacional_);
    printf("PIB per capita: R$ %.3f reais\n", PIB_per_capita_);
    printf("Super Poder: %.3f\n", super__poder);

    printf("===========================\n\n");

    // Comparação de 3 atributos
    
    printf("Comparaçao de cartas: populaçao\n");
    printf("carta1: São paulo:11.0000\n");
    printf("carta2: Rio de janeiro:80.0000\n");
    if(populacao > populacao_){
         printf("carta1 venceu\n");
        }else{
         printf("carta2 venceu\n");   
        }
    printf("Comparaçao de cartas: area\n");
    printf("carta1: São paulo:240.000km\n");
    printf("carta2: Rio de janeiro:430.000km\n");
    if(area > area_){
         printf("carta1 venceu\n");
        }else{
         printf("carta2 venceu\n");   
        }
    printf("Comparaçao de cartas: pontos turisticos\n");
    printf("carta1: São paulo:4.000\n");
    printf("carta2: Rio de janeiro:2.000\n");
    if(pontos_turisticos > pontos__turisticos ){
         printf("carta1 venceu\n");
        }else{
         printf("carta2 venceu\n");   
        }
   
   
   
        return 0;
}
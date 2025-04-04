#include <stdio.h>

int main(){
    char estado1 = 'A';
    char codigo1[10] = "A01";
    char cidade1[10] = "Belém";
    unsigned long int populacao1 = 1303403;
    float area1 = 1064.918;
    float PIB1 = 33467126000; 
    int Pturisticos1 = 23;
    float densidade1 = populacao1 / area1;
    float PIB_per_Capita1 = PIB1 / populacao1;
    float superPoder1 = populacao1 + area1 + PIB1 + Pturisticos1 + (1/densidade1) + PIB_per_Capita1;
    //Para o cálculo do PIB per capita sair corretamente, fiz uma mudança no valor do PIB1, 
    //então não pus o valor abreviado 33.46 bilhões.
    
    printf("Desafio das Cartas!\n");
    
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Códico: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu de Habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f de Reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", Pturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1);
    printf("Super Poder é: %.0f pontos\n", superPoder1);

    char estado2 = 'B';
    char codigo2[10] = "B02";
    char cidade2[10] = "Manaus";
    unsigned long int populacao2 = 2434640;
    float area2 = 11.401;
    float PIB2 = 103281000000;
    int Pturisticos2 = 11;
    float densidade2 = populacao2 / area2;
    float PIB_per_Capita2 = PIB2 / populacao2;
    float superPoder2 = populacao2 + area2 + PIB2 + Pturisticos2 + (1/densidade2) + PIB_per_Capita2;

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu de Habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f de Reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", Pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);
    printf("Super Poder é: %.0f pontos\n", superPoder2);
    //Assim como na carta 1, tive que não abreviar o valor do PIB2,
    //para que o valor do cálculo da variável PIB_per_Capita2 saia correto.

    int POPULACAO;
    float AREA;
    float PIB;
    int PTURISTICOS;
    float DENSIDADE;
    float PIBPERCAPITA;
    float SUPER_PODER;

    POPULACAO = populacao1 > populacao2;
    AREA = area1 > area2;
    PIB = PIB1 > PIB2;
    DENSIDADE = densidade1 > densidade2;
    PIBPERCAPITA = PIB_per_Capita1 > PIB_per_Capita2;
    SUPER_PODER = superPoder1 > superPoder2;
    
    
    printf("** COMPARANDO OS PODERES **\n");

    printf("População: %u\n", POPULACAO);
    printf("Área:      %.0f\n", AREA);
    printf("PIB:       %.0f\n", PIB);
    printf("Densidade: %.0f\n", DENSIDADE);
    printf("PIB per capita: %.0f\n", PIBPERCAPITA);
    printf("Super Poder: %.0f\n", SUPER_PODER);

    
    return 0;

}
#include <stdio.h>

int main(){
    char estado1 = 'A';
    char codigo1[10] = "A01";
    char cidade1[10] = "Belém";
    int populacao1 = 1303403;
    float area1 = 1064.918;
    float PIB1 = 33467126000; 
    int Pturisticos1 = 23;
    float densidade1 = populacao1 / area1;
    float PIB_per_Capita1 = PIB1 / populacao1;
    
    //Para o cálculo do PIB per capita sair corretamente, fiz uma mudança no valor do PIB1, 
    //então não pus o valor abreviado 33.46 bilhões.
    
    printf("Desafio das Cartas!\n");
    
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Códico: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d de Habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f de Reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", Pturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1);
    

    char estado2 = 'B';
    char codigo2[10] = "B02";
    char cidade2[10] = "Manaus";
    int populacao2 = 2434640;
    float area2 = 11.401;
    float PIB2 = 103281000000;
    int Pturisticos2 = 11;
    float densidade2 = populacao2 / area2;
    float PIB_per_Capita2 = PIB2 / populacao2;

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d de Habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f de Reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", Pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);

    //Assim como na carta 1, tive que não abreviar o valor do PIB2,
    //para que o valor do cálculo da variável PIB_per_Capita2 saia correto.
    

    
    return 0;

}
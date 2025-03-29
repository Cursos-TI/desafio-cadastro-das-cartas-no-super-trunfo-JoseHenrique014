#include <stdio.h>

int main(){
    char estado1 = 'A';
    char codigo1[10] = "A01";
    char cidade1[10] = "Belém";
    int populacao1 = 1303403;
    float area1 = 1064.918;
    float PIB1 = 33.46;
    int Pturisticos1 = 23;

    printf("Desafio das Cartas!\n");

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Códico: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d de Habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", Pturisticos1);
    
    char estado2 = 'B';
    char codigo2[10] = "B02";
    char cidade2[10] = "Manaus";
    int populacao2 = 2434640;
    float area2 = 11.401;
    float PIB2 = 103.2;
    int Pturisticos2 = 11;

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d de Habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.1f Bilhões de Reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", Pturisticos2);

    
    return 0;

}
#include <stdio.h>

int main(){
    char estado = 'A';
    char codigo[10] = "A01";
    char cidade[10] = "Belém";
    int populacao = 1303403;
    float area = 1064.91;
    float PIB = 33.46;
    int Pturisticos = 23;

    printf("Desafio das Cartas!\n");

    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Códico: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d de Habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", PIB);
    printf("Pontos Turísticos: %d\n", Pturisticos);
    
    return 0;

}
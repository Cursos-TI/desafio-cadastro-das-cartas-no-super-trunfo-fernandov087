#include <stdio.h>

int main() {
    
    // Declaração das variáveis
    int populacao, populacao2, pontosturisticos,pontosturisticos2;
    float pib, pib2, area, area2;
    char estado, estado2, cidade[15], cidade2[15], codigocarta[3], codigocarta2[3];

    // Imprime mensagem de boas vindas e informação do cadastro da primeira carta
    printf("BEM VINDO\nVAMOS CADASTRAR A PRIMEIRA CARTA!\n"); 

    printf("\nDigite uma letra de A e H, que representara um estado: ");
    scanf(" %c", &estado);

    printf("Digite a letra do seu estado e um codigo entre 01 e 04, (ex: A01, B03): ");
    scanf("%s", codigocarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Quantos habitantes tem essa cidade: ");
    scanf("%d", &populacao);

    printf("Qual é a área dessa cidade: ");
    scanf("%f", &area);

    printf("Qual é o valor do PIB desta cidade: ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos possui esta cidade: ");
    scanf("%d", &pontosturisticos);

    // Imprime mensagem informando incicio do cadastro da segunda carta
    printf("\nAGORA VAMOS CADASTRAR A SEGUNDA CARTA!\n");

    printf("Digite uma letra de A e H, que representara um estado: "); //
    scanf(" %c", &estado2);

    printf("Digite a letra do seu estado e um codigo entre 01 e 04, (ex: A01, B03): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Quantos habitantes tem essa cidade: ");
    scanf("%d", &populacao2);

    printf("Qual é a área dessa cidade: ");
    scanf("%f", &area2);

    printf("Qual é o valor do PIB desta cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos possui esta cidade: ");
    scanf("%d", &pontosturisticos2);
    
    // Imprimir os dados da carta 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);

    // Imprimir os dados da carta2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d", pontosturisticos2);

    return 0;
}

#include <stdio.h>
int main(){
    //VARIÁVEIS DA CARTA 01
    int populacao1, pontos_turistico1, cidade1;
    char estado1, nome1[20];
    float pib1, area1;

    //VARIAVEIS DA CARTA 02
    int populacao2, pontos_turistico2, cidade2;
    char estado2, nome2[20];
    float pib2, area2;

    //CADASTRO D CARTA 01
    //ETRADA DE DADOS
    printf("========================= SUPER TRUNFO =========================\n\n");
    printf("Responda as perguntas abaixo para cadastrar as cartas...\n\n");

    printf("Carta 01\n");
    printf("Nome: ");
    scanf("%s", nome1);
    printf("\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("\n");

    printf("Cidade (01 a 04): ");
    scanf(" %d", &cidade1);
    printf("\n");

    printf("População: ");
    scanf(" %d", &populacao1);
    printf("\n");

    printf("Pontos turísticos: ");
    scanf(" %d", &pontos_turistico1);
    printf("\n");

    printf("Pib: ");
    scanf(" %f", &pib1);
    printf("\n");

    printf("Area (em Km²): ");
    scanf(" %f", &area1);
    printf("\n\n");

    printf("================================================================\n\n");

    //CADASTRO DA CARTA 02
    //ENTRADA DE DADOS

    printf("Carta 02\n");

    printf("Nome: ");
    scanf("%s", nome2);
    printf("\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("\n");

    printf("Cidade (01 a 04): ");
    scanf(" %d", &cidade2);
    printf("\n");

    printf("População: ");
    scanf(" %d", &populacao2);
    printf("\n");

    printf("Pontos turísticos: ");
    scanf(" %d", &pontos_turistico2);
    printf("\n");

    printf("Pib: ");
    scanf(" %f", &pib2);
    printf("\n");

    printf("Area (em Km²): ");
    scanf(" %f", &area2);
    printf("\n\n");



    //DADOS CADASTRADOS DA CARTA 01 E 02
    //SAÍDA DE DADOS
    printf("DADOS CADASTRADOS (CARTA 01)====================================\n\n");

    printf("CóDigo da carta: %c%d\n", estado1, cidade1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos_turistico1);
    printf("Pib: %.1f BILHÕES\n", pib1);
    printf("Área: %.2f Km²\n\n", area1);

    printf("DADOS CADASTRADOS (CARTA 02)====================================\n\n");

    printf("CóDigo da carta: %c%d\n", estado2, cidade2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos_turistico2);
    printf("Pib: %.1f BILHÔES\n", pib2);
    printf("Área: %.2f Km²\n\n", area2);
    printf("FIM\n");

    return 0;

}
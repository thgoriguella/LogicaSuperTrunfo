#include <stdio.h>
#include <stdlib.h>

int main() {

    // variáveis cadastradas das cartas**
    // variáveis carta 1

    char codigo_carta1[4] = "B01", pais1[20] = "BRASIL";
    unsigned long int populacao1 = 2417678;
    float area1 = 330.9, pib1 = 62.954;
    int pontos_turisticos1 = 73;
    float densidade_pop1;
    float pib_percapita1;
    float superpw1;

    // variáveis carta 2
    char codigo_carta2[4] = "A02", pais2[20] = "ARGENTINA";
    unsigned long int populacao2 = 429567;
    float area2 = 281.3, pib2 = 24.109;
    int pontos_turisticos2 = 23;
    float densidade_pop2;
    float pib_percapita2;
    float superpw2;

    int opcao;
    // Calculo para densidade populacional carta 1&2

    densidade_pop1 = (float)populacao1 / area1;
    densidade_pop2 = (float)populacao2 / area2;

    // Calculo para rendapercapita carta 1&2

    pib_percapita1 = pib1 / (float)populacao1;
    pib_percapita2 = pib2 / (float)populacao2;

//Calculo do Super poder (soma dos valores numericos) carta 1&2
    
    superpw1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_percapita1 + (1.0f / densidade_pop1);
    superpw2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_percapita2 + (1.0f / densidade_pop2);

    // Retornar ao usuário os dados da carta 1
    printf("\n*** JOGO SUPERTRUNFO ***\n");
    printf("-- PRIMEIRA CARTA --\n");
    printf("Pais: %s \n", pais1);
    printf("Código: %s \n", codigo_carta1);
    printf("População: %d \n", populacao1);
    printf("Pontos turísticos: %d \n", pontos_turisticos1);
    printf("Área em km²: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Densidade Populacional: %.2f \n", densidade_pop1);
    printf("                                   \n");
    //printf("PIB per Capita: %.2f \n", pib_percapita1);
    //printf("Super Poder: %.2f\n", superpw1);

    // Retornar ao usuário os dados da carta 2
    printf("-- SEGUNDA CARTA --\n");
    printf("Pais: %s \n", pais2);
    printf("Código: %s \n", codigo_carta2);
    printf("População: %d \n", populacao2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    printf("Área em km²: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Densidade Populacional: %.2f \n", densidade_pop2);
    printf("***************************************\n");
    //printf("PIB per Capita: %.2f \n", pib_percapita2);
    //printf("Super Poder: %.2f \n", superpw2);

    // Menu para seleção do atributo
    printf("*-- MENU INICIAL --*\n");
    printf(" ESCOLHA UMA DAS OPÇÕES ABAIXO: \n");
    printf("1. REGRAS DO JOGO!\n");
    printf("2. POPULAÇÃO\n");
    printf("3. ÁREA TERRITORIAL\n");
    printf("4. PIB\n");
    printf("5. PONTOS TURÍSTICOS\n");
    printf("6. DENSIDADE POPULACIONAL\n");
    printf("7. SAIR DO JOGO!\n");
    printf("ESCOLHA: \n");
    scanf("%d", &opcao);
    printf("***************************************\n");

    switch (opcao)
    {
    case 1:
        printf("*---REGRAS DO JOGO!---*\n");
        printf("VENCE A CARTA COM MAIOR VALOR DO ATRIBUTO ESCOLHIDO\n");
        printf("O ATRIBUTO DENSIDADE POPULACIONAL VENCE QUEM TIVER O MENOR VALOR.\n");
        printf("SE OS VALORES FOREM IGUAIS, TEREMOS UM EMPATE!\n");
        break;

    case 2:
        printf("*---ATRIBUTO ESCOLHIDO---* POPULAÇÃO\n");
        printf("CARTA 1 - %s|%s: %d \n", pais1, codigo_carta1, populacao1);
        printf("CARTA 2 - %s|%s: %d \n", pais2, codigo_carta2, populacao2);
    if (populacao1 > populacao2)
    {   printf("VENCEDOR: CARTA 1 - DO %s COM O A POPULAÇÃO DE %d VENCEU!\n", pais1, populacao1);
    } else 
    if (populacao2 > populacao1)
    {   printf("VENCEDOR: CARTA 2 - DA %s COM O A POPULAÇÃO DE %d VENCEU!\n", pais2, populacao2);
    } else
    {   printf("O RESULTADO FOI DE EMPATE!\n");
        printf("CARTA 1 - DO %s COM A POPULAÇÃO DE %d\n", pais1, populacao1);
        printf("CARTA 2 - DA %s COM A POPULAÇÃO DE %d\n", pais2, populacao2);}
        break;

    case 3:
        printf("*---ATRIBUTO ESCOLHIDO---* ÁREA TERRITÓRIAL\n");
        printf("CARTA 1 - %s|%s: %.1f \n", pais1, codigo_carta1, area1);
        printf("CARTA 2 - %s|%s: %.1f \n", pais2, codigo_carta2, area2);
    if (populacao1 > populacao2)
    {   printf("VENCEDOR: CARTA 1 - DO %s COM O A ÁREA DE %.1f KM VENCEU!\n", pais1, area1);
    } else 
    if (populacao2 > populacao1)
    {   printf("VENCEDOR: CARTA 2 - DA %s COM O A ÁREA DE %.1f KM VENCEU!\n", pais2, area2);
    } else
    {   printf("O RESULTADO FOI DE EMPATE!\n");
        printf("CARTA 1 - DO %s COM A ÁREA DE %.1f KM\n", pais1, area1);
        printf("CARTA 2 - DA %s COM A ÁREA DE %.1f KM\n", pais2, area2);}
        break;

    case 4:
        printf("*---ATRIBUTO ESCOLHIDO---* PIB\n");
        printf("CARTA 1 - %s|%s: %.2f \n", pais1, codigo_carta1, pib1);
        printf("CARTA 2 - %s|%s: %.2f \n", pais2, codigo_carta2, pib2);
    if (pib1 > pib2)
    {   printf("VENCEDOR: CARTA 1 - DO %s COM O PIB DE %.2f BILHOES DE REAIS VENCEU!\n", pais1, pib1);
    } else 
    if (pib2 > pib1)
    {   printf("VENCEDOR: CARTA 2 - DA %s COM O PIB DE %.2f BILHOES DE REAIS VENCEU!\n", pais2, pib2);
    } else
    {   printf("O RESULTADO FOI DE EMPATE!\n");
        printf("CARTA 1 - DO %s COM O PIB DE %.2f BILHOES DE REAIS\n", pais1, pib1);
        printf("CARTA 2 - DA %s COM O PIB DE %.2f BILHOES DE REAIS\n", pais2, pib2);}
        break;

    case 5:
        printf("*---ATRIBUTO ESCOLHIDO---* PONTOS TURISTICOS\n");
        printf("CARTA 1 - %s|%s: %d \n", pais1, codigo_carta1, pontos_turisticos1);
        printf("CARTA 2 - %s|%s: %d \n", pais2, codigo_carta2, pontos_turisticos2);
    if (pontos_turisticos1 > pontos_turisticos2)
    {   printf("VENCEDOR: CARTA 1 - DO %s COM %d PONTOS TURÍSTICOS VENCEU!\n", pais1, pontos_turisticos1);
    } else 
    if (pontos_turisticos2 > pontos_turisticos1)
    {   printf("VENCEDOR: CARTA 2 - DA %s COM %d PONTOS TURÍSTICOS VENCEU!\n", pais2, pontos_turisticos2);
    } else
    {   printf("O RESULTADO FOI DE EMPATE!\n");
        printf("CARTA 1 - DO %s COM %d PONTOS TURÍSTICOS\n", pais1, pontos_turisticos1);
        printf("CARTA 2 - DA %s COM %d PONTOS TURÍSTICOS\n", pais2, pontos_turisticos2);}
        break;

    case 6:
        printf("*---ATRIBUTO ESCOLHIDO---* DENSIDADE POPULACIONAL\n");
        printf("CARTA 1 - %s|%s: %.2f \n", pais1, codigo_carta1, densidade_pop1);
        printf("CARTA 2 - %s|%s: %.2f \n", pais2, codigo_carta2, densidade_pop2);
    if (densidade_pop1 < densidade_pop2)
    {   printf("VENCEDOR: CARTA 1 - DO %s COM %.2f DE DENSIDADE POPULACIONAL VENCEU!\n", pais1, densidade_pop1);
    } else 
    if (densidade_pop2 < densidade_pop1)
    {   printf("VENCEDOR: CARTA 2 - DA %s COM %.2f DE DENSIDADE POPULACIONAL VENCEU!\n", pais2, densidade_pop2);
    } else
    {   printf("O RESULTADO FOI DE EMPATE!\n");
        printf("CARTA 1 - DO %s COM %2.f DE DENSIDADE POPULACIONAL\n", pais1, densidade_pop1);
        printf("CARTA 2 - DA %s COM %2.f DE DENSIDADE POPULACIONAL\n", pais2, densidade_pop2);}
        break;

    case 7:
        printf("*---OBRIGADO POR TUDO!---*\n");
        break;

    default:
        printf("OPÇÃO INVÁLIDA! RETORNE AO MENU INICIAL.\n");
        break;
    }

    return 0;
}

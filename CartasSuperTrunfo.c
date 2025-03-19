#include <stdio.h>

int main() {
    // Variáveis
    // Variáveis terminadas com 1 refere-se a Primeira Cidade
    // Terminadas com 2 refere-se a Segunda Cidade
    char nomeCidade1[20], codCarta1[4], estado1, nomeCidade2[20], codCarta2[4], estado2;
    char comparacaoPop, comparacaoArea, comparacaoPIB, comparacaoPtTuristicos, comparacaoDensPop, comparacaoPIBPerCap, comparacaoSuperPoder;
    int qtdPontosTuristicos1, qtdPontosTuristicos2, primeiraComparacao, segundaComparacao, pontuacaoCarta1, pontuacaoCarta2;
    unsigned long int populacao1, populacao2;
    float pib1, area1, densidadePop1, pibPerCapita1, superPoder1, pib2, area2, densidadePop2, pibPerCapita2, superPoder2;
    long double inversoDensidadePop1, inversoDensidadePop2;

    // Cadastro das Cartas:
    // Primeira Cidade:
    printf("Preencha os campos abaixo:\n");
    printf("OBS: Código da carta é a combinação da letra do estado(A a H) e o número da cidade(01 a 04) ex: A01\n\n");
    printf("Primeira Cidade:\n");

    printf("Estado: ");
    scanf("%c", &estado1);
    
    printf("Código da carta: ");
    scanf("%s", codCarta1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1); // " %[^\n]s" serve para aceitar espaços. ex: São Paulo. Tem esse espaço inical para não pular o input

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicos1);

    // Segunda Cidade:
    printf("\nSegunda Cidade:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Código da carta: ");
    scanf("%s", codCarta2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicos2);

    // Calculo PIB per Capita e Densidade Populacional
    // Primeira Carta
    densidadePop1 = populacao1 / area1;
    pibPerCapita1 = (pib1 / populacao1) * 1e9;

    // Segunda Carta
    densidadePop2 = populacao2 / area2;
    pibPerCapita2 = (pib2 / populacao2) * 1e9;

    // Calculo Super Poder
    // Primeira Carta
    inversoDensidadePop1 = (1/densidadePop1);
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)qtdPontosTuristicos1 + pibPerCapita1 + inversoDensidadePop1;

    // Segunda Carta
    inversoDensidadePop2 = (1/densidadePop2);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)qtdPontosTuristicos2 + pibPerCapita2 + inversoDensidadePop2;

    // Exibição dos Dados das Cartas:
    // Primeira Cidade
    printf("\n=====================================\n");
    printf("Dados inseridos:\n");
    printf("\nPrimeira Carta:\n");
    printf("Código da carta: %s\n", codCarta1);
    printf("Super Poder da carta: %.2f\n", superPoder1);
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", qtdPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Segunda Cidade
    printf("\nSegunda Carta:\n");
    printf("Código da carta: %s\n", codCarta2);
    printf("Super Poder da carta: %.2f\n", superPoder2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", qtdPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Escolha de comparação de cartas
    printf("\nEscolha a primeira comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Informe sua escolha: ");
    scanf("%d", &primeiraComparacao);

    // Inicializando pontuação zerada
    pontuacaoCarta1 = 0;
    pontuacaoCarta2 = 0;

    // Comparação da primeira escolha
    // Vencedor pontua (+1)
    // Empate niguem pontua
    switch (primeiraComparacao)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            comparacaoPop = 1;
            pontuacaoCarta1++;
        } else
        {
            comparacaoPop = 0;
            pontuacaoCarta2++;
        }
        break;
    case 2:
        if (area1 > area2)
        {
            comparacaoArea = 1;
            pontuacaoCarta1++;
        } else
        {
            comparacaoArea = 0;
            pontuacaoCarta2++;
        }
        break;
    case 3:
        if (pib1 > pib2)
        {
            comparacaoPIB = 1;
            pontuacaoCarta1++;
        } else
        {
            comparacaoPIB = 0;
            pontuacaoCarta2++;
        }
        break;
    case 4:
        if (qtdPontosTuristicos1 > qtdPontosTuristicos2)
        {
            comparacaoPtTuristicos = 1;
            pontuacaoCarta1++;
        }
        else
        {
            comparacaoPtTuristicos = 0;
            pontuacaoCarta2++;
        }
        break;
    case 5:
        if (densidadePop1 < densidadePop2)
        {
            comparacaoDensPop = 1;
            pontuacaoCarta1++;
        }
        else
        {
            comparacaoDensPop = 0;
            pontuacaoCarta2++;
        }
        break;
    }

    // Comparação da segunda escolha
    // Lógica para retirar a opção escolhida anteriormente
    switch (primeiraComparacao)
    {
    case 1:
        printf("\nEscolha a primeira comparação:\n");
        printf("1 - Área\n");
        printf("2 - PIB\n");
        printf("3 - Número de pontos turísticos\n");
        printf("4 - Densidade demográfica\n");
        printf("Informe sua escolha: ");
        scanf("%d", &segundaComparacao);

        switch (segundaComparacao)
        {
        case 1:
            if (area1 > area2)
            {
                comparacaoArea = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoArea = 0;
                pontuacaoCarta2++;
            }
            break;
        case 2:
            if (pib1 > pib2)
            {
                comparacaoPIB = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPIB = 0;
                pontuacaoCarta2++;
            }
            break;
        case 3:
            if (qtdPontosTuristicos1 > qtdPontosTuristicos2)
            {
                comparacaoPtTuristicos = 1;
                pontuacaoCarta1++;
            }
            else
            {
                comparacaoPtTuristicos = 0;
                pontuacaoCarta2++;
            }
            break;
        case 4:
            if (densidadePop1 < densidadePop2)
            {
                comparacaoDensPop = 1;
                pontuacaoCarta1++;
            }
            else
            {
                comparacaoDensPop = 0;
                pontuacaoCarta2++;
            }
            break;
        }
        break;
    case 2:
        printf("\nEscolha a primeira comparação:\n");
        printf("1 - População\n");
        printf("2 - PIB\n");
        printf("3 - Número de pontos turísticos\n");
        printf("4 - Densidade demográfica\n");
        printf("Informe sua escolha: ");
        scanf("%d", &segundaComparacao);

        switch (segundaComparacao)
        {
        case 1:
            if (populacao1 > populacao2)
            {
                comparacaoPop = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPop = 0;
                pontuacaoCarta2++;
            }
            break;
        case 2:
            if (pib1 > pib2)
            {
                comparacaoPIB = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPIB = 0;
                pontuacaoCarta2++;
            }
            break;
        case 3:
            if (qtdPontosTuristicos1 > qtdPontosTuristicos2)
            {
                comparacaoPtTuristicos = 1;
                pontuacaoCarta1++;
            }
            else
            {
                comparacaoPtTuristicos = 0;
                pontuacaoCarta2++;
            }
            break;
        case 4:
            if (densidadePop1 < densidadePop2)
            {
                comparacaoDensPop = 1;
                pontuacaoCarta1++;
            }
            else
            {
                comparacaoDensPop = 0;
                pontuacaoCarta2++;
            }
            break;
        }
        break;
    case 3:
        printf("\nEscolha a primeira comparação:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - Número de pontos turísticos\n");
        printf("4 - Densidade demográfica\n");
        printf("Informe sua escolha: ");
        scanf("%d", &segundaComparacao);

        switch (segundaComparacao)
        {
        case 1:
            if (populacao1 > populacao2)
            {
                comparacaoPop = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPop = 0;
                pontuacaoCarta2++;
            }
            break;
        case 2:
            if (area1 > area2)
            {
                comparacaoArea = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoArea = 0;
                pontuacaoCarta2++;
            }
            break;
        case 3:
            if (qtdPontosTuristicos1 > qtdPontosTuristicos2)
            {
                comparacaoPtTuristicos = 1;
                pontuacaoCarta1++;
            }
            else
            {
                comparacaoPtTuristicos = 0;
                pontuacaoCarta2++;
            }
            break;
        case 4:
            if (densidadePop1 < densidadePop2)
            {
                comparacaoDensPop = 1;
                pontuacaoCarta1++;
            }
            else
            {
                comparacaoDensPop = 0;
                pontuacaoCarta2++;
            }
            break;
        }
        break;
    case 4:
        printf("\nEscolha a primeira comparação:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade demográfica\n");
        printf("Informe sua escolha: ");
        scanf("%d", &segundaComparacao);

        switch (segundaComparacao)
        {
        case 1:
            if (populacao1 > populacao2)
            {
                comparacaoPop = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPop = 0;
                pontuacaoCarta2++;
            }
            break;
        case 2:
            if (area1 > area2)
            {
                comparacaoArea = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoArea = 0;
                pontuacaoCarta2++;
            }
            break;
        case 3:
            if (pib1 > pib2)
            {
                comparacaoPIB = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPIB = 0;
                pontuacaoCarta2++;
            }
            break;
        case 4:
            if (densidadePop1 < densidadePop2)
            {
                comparacaoDensPop = 1;
                pontuacaoCarta1++;
            }
            else
            {
                comparacaoDensPop = 0;
                pontuacaoCarta2++;
            }
            break;
        }
        break;
    case 5:
        printf("\nEscolha a primeira comparação:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("Informe sua escolha: ");
        scanf("%d", &segundaComparacao);

        switch (segundaComparacao)
        {
        case 1:
            if (populacao1 > populacao2)
            {
                comparacaoPop = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPop = 0;
                pontuacaoCarta2++;
            }
            break;
        case 2:
            if (area1 > area2)
            {
                comparacaoArea = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoArea = 0;
                pontuacaoCarta2++;
            }
            break;
        case 3:
            if (pib1 > pib2)
            {
                comparacaoPIB = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPIB = 0;
                pontuacaoCarta2++;
            }
            break;
        case 4:
            if (qtdPontosTuristicos1 > qtdPontosTuristicos2)
            {
                comparacaoPtTuristicos = 1;
                pontuacaoCarta1++;
            }
            else
            {
                comparacaoPtTuristicos = 0;
                pontuacaoCarta2++;
            }
            break;
        }
        break;
    }

    // Exibição da comparação de Cartas
    printf("\nResultado da Comparação de Cartas:\n");
    printf("%s VS %s\n\n", nomeCidade1, nomeCidade2);

    switch (primeiraComparacao)
    {
    case 1:
        printf("O atributo a ser comparado é População\n");
        if (pontuacaoCarta1 == pontuacaoCarta2)
        {
            printf("Valores:\n");
            printf("%s: %lu X %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            printf("Deu empate!\n");
        }else
        {
            if (comparacaoPop)
            {
                printf("Valores:\n");
                printf("%s: %lu X %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
                printf("Carta %s Ganhou!\n", nomeCidade1);
            }else
            {
                printf("Valores:\n");
                printf("%s: %lu X %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
                printf("Carta %s Ganhou!\n", nomeCidade2);
            }
        }
        break;
    case 2:
        printf("O atributo a ser comparado é Área\n");
        if (comparacaoArea == 2)
        {
            printf("Valores:\n");
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
            printf("Deu empate!\n");
        }else
        {
            if (comparacaoArea)
            {
                printf("Valores:\n");
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
                printf("Carta %s Ganhou!\n", nomeCidade1);
            }else
            {
                printf("Valores:\n");
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
                printf("Carta %s Ganhou!\n", nomeCidade2);
            }
        }
        break;
    case 3:
        printf("O atributo a ser comparado é PIB\n");
        if (comparacaoPIB == 2)
        {
            printf("Valores:\n");
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
            printf("Deu empate!\n");
        }else
        {
            if (comparacaoPIB)
            {
                printf("Valores:\n");
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
                printf("Carta %s Ganhou!\n", nomeCidade1);
            }else
            {
                printf("Valores:\n");
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
                printf("Carta %s Ganhou!\n", nomeCidade2);
            }
        }
        break;
    case 4:
        printf("O atributo a ser comparado é Número de pontos turísticos\n");
        if (comparacaoPtTuristicos == 2)
        {
            printf("Valores:\n");
            printf("%s: %d X %s: %d\n", nomeCidade1, qtdPontosTuristicos1, nomeCidade2, qtdPontosTuristicos2);
            printf("Deu empate!\n");
        }else
        {
            if (comparacaoPtTuristicos)
            {
                printf("Valores:\n");
                printf("%s: %d X %s: %d\n", nomeCidade1, qtdPontosTuristicos1, nomeCidade2, qtdPontosTuristicos2);
                printf("Carta %s Ganhou!\n", nomeCidade1);
            }else
            {
                printf("Valores:\n");
                printf("%s: %d X %s: %d\n", nomeCidade1, qtdPontosTuristicos1, nomeCidade2, qtdPontosTuristicos2);
                printf("Carta %s Ganhou!\n", nomeCidade2);
            }
        }
        break;
    case 5:
        printf("O atributo a ser comparado é Densidade Populacional\n");
        if (comparacaoDensPop == 2)
        {
            printf("Valores:\n");
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, densidadePop1, nomeCidade2, densidadePop2);
            printf("Deu empate!\n");
        }else
        {
            if (comparacaoDensPop)
            {
                printf("Valores:\n");
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, densidadePop1, nomeCidade2, densidadePop2);
                printf("Carta %s Ganhou!\n", nomeCidade1);
            }else
            {
                printf("Valores:\n");
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, densidadePop1, nomeCidade2, densidadePop2);
                printf("Carta %s Ganhou!\n", nomeCidade2);
            }
        }
        break;
    }

    return 0;
}

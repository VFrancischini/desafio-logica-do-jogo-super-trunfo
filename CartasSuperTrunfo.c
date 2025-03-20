#include <stdio.h>

int main() {
    // Variáveis
    // Variáveis terminadas com 1 refere-se a Primeira Cidade
    // Terminadas com 2 refere-se a Segunda Cidade
    char nomeCidade1[20], codCarta1[4], estado1, nomeCidade2[20], codCarta2[4], estado2;
    char comparacaoPop, comparacaoArea, comparacaoPIB, comparacaoPtTuristicos, comparacaoDensPop, comparacaoPIBPerCap, comparacaoSuperPoder;
    int qtdPontosTuristicos1, qtdPontosTuristicos2, primeiraComparacao, segundaComparacao, pontuacaoCarta1 = 0, pontuacaoCarta2 = 0;
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

    // Escolha da primeira comparação
    printf("\n=====================================\n");
    printf("Escolha a primeira comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Informe sua escolha: ");
    scanf("%d", &primeiraComparacao);

    // Primeira comparação
    // Vencedor pontua (+1)
    // Empate niguem pontua
    switch (primeiraComparacao)
    {
    case 1:
        if (populacao1 == populacao2)
        {
            comparacaoPop = 2;
        }else
        {
            if (populacao1 > populacao2)
            {
                comparacaoPop = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPop = 0;
                pontuacaoCarta2++;
            }
        }
        break;
    case 2:
        if (area1 == area2)
        {
            comparacaoArea = 2;
        }else
        {
            if (area1 > area2)
            {
                comparacaoArea = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoArea = 0;
                pontuacaoCarta2++;
            }
        }
        break;
    case 3:
        if (pib1 == pib2)
        {
            comparacaoPIB = 2;
        }else
        {
            if (pib1 > pib2)
            {
                comparacaoPIB = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPIB = 0;
                pontuacaoCarta2++;
            }
        }
        break;
    case 4:
        if (qtdPontosTuristicos1 == qtdPontosTuristicos2)
        {
            comparacaoPtTuristicos = 2;
        }else
        {
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
        }
        break;
    case 5:
        if (densidadePop1 == densidadePop2)
        {
            comparacaoDensPop = 2;
        }else
        {
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
        }
        break;
    default:
    printf("\n===================\n");
        printf("Opção inválida");
        printf("\n===================\n");
        return 1;
    }
    
    // Exibição da primeira comparação
    switch (primeiraComparacao)
    {
    case 1:
        printf("\nO atributo a ser comparado é População\n");

        if (comparacaoPop == 2)
        {
            printf("%s: %lu X %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            printf("Deu empate na primeira comparação!\n");
        }else
        {
            if (comparacaoPop)
            {
                printf("%s: %lu X %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
                printf("Carta %s Ganhou a primeira comparação!\n", nomeCidade1);
            }else
            {
                printf("%s: %lu X %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
                printf("Carta %s Ganhou a primeira comparação!\n", nomeCidade2);
            }
        }
        break;
    case 2:
        printf("\nO atributo a ser comparado é Área\n");
        if (comparacaoArea == 2)
        {
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
            printf("Deu empate na primeira comparação!\n");
        }else
        {
            if (comparacaoArea)
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
                printf("Carta %s Ganhou a primeira comparação!\n", nomeCidade1);
            }else
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
                printf("Carta %s Ganhou a primeira comparação!\n", nomeCidade2);
            }
        }
        break;
    case 3:
        printf("\nO atributo a ser comparado é PIB\n");
        if (comparacaoPIB == 2)
        {
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
            printf("Deu empate na primeira comparação!\n");
        }else
        {
            if (comparacaoPIB)
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
                printf("Carta %s Ganhou a primeira comparação!\n", nomeCidade1);
            }else
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
                printf("Carta %s Ganhou a primeira comparação!\n", nomeCidade2);
            }
        }
        break;
    case 4:
        printf("\nO atributo a ser comparado é Número de pontos turísticos\n");
        if (comparacaoPtTuristicos == 2)
        {
            printf("%s: %d X %s: %d\n", nomeCidade1, qtdPontosTuristicos1, nomeCidade2, qtdPontosTuristicos2);
            printf("Deu empate na primeira comparação!\n");
        }else
        {
            if (comparacaoPtTuristicos)
            {
                printf("%s: %d X %s: %d\n", nomeCidade1, qtdPontosTuristicos1, nomeCidade2, qtdPontosTuristicos2);
                printf("Carta %s Ganhou a primeira comparação!\n", nomeCidade1);
            }else
            {
                printf("%s: %d X %s: %d\n", nomeCidade1, qtdPontosTuristicos1, nomeCidade2, qtdPontosTuristicos2);
                printf("Carta %s Ganhou a primeira comparação!\n", nomeCidade2);
            }
        }
        break;
    case 5:
        printf("\nO atributo a ser comparado é Densidade Populacional\n");
        if (comparacaoDensPop == 2)
        {
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, densidadePop1, nomeCidade2, densidadePop2);
            printf("Deu empate na primeira comparação!\n");
        }else
        {
            if (comparacaoDensPop)
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, densidadePop1, nomeCidade2, densidadePop2);
                printf("Carta %s Ganhou a primeira comparação!\n", nomeCidade1);
            }else
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, densidadePop1, nomeCidade2, densidadePop2);
                printf("Carta %s Ganhou a primeira comparação!\n", nomeCidade2);
            }
        }
        break;
    }

    // Escolha da segunda comparação (Sem repetir a primeira)
    printf("\nEscolha a segunda comparação:\n");

    primeiraComparacao != 1 ? printf("1 - População\n") : printf("1 - Opção já escolhida\n");
    primeiraComparacao != 2 ? printf("2 - Área\n") : printf("2 - Opção já escolhida\n");
    primeiraComparacao != 3 ? printf("3 - PIB\n") : printf("3 - Opção já escolhida\n");
    primeiraComparacao != 4 ? printf("4 - Número de pontos turísticos\n") : printf("4 - Opção já escolhida\n");
    primeiraComparacao != 5 ? printf("5 - Densidade demográfica\n") : printf("5 - Opção já escolhida\n");

    printf("Informe sua escolha: ");
    scanf("%d", &segundaComparacao);

    // Verifica se a segunda escolha é válida (não repetida)
    if (segundaComparacao == primeiraComparacao) {
        printf("\n========================================================\n");
        printf("Opção repetida! Escolha uma opção diferente da primeira.");
        printf("\n========================================================\n");
        return 1;
    }

    // Segunda comparação
    switch (segundaComparacao)
    {
        case 1:
        if (populacao1 == populacao2)
        {
            comparacaoPop = 2;
        }else
        {
            if (populacao1 > populacao2)
            {
                comparacaoPop = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPop = 0;
                pontuacaoCarta2++;
            }
        }
        break;
    case 2:
        if (area1 == area2)
        {
            comparacaoArea = 2;
        }else
        {
            if (area1 > area2)
            {
                comparacaoArea = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoArea = 0;
                pontuacaoCarta2++;
            }
        }
        break;
    case 3:
        if (pib1 == pib2)
        {
            comparacaoPIB = 2;
        }else
        {
            if (pib1 > pib2)
            {
                comparacaoPIB = 1;
                pontuacaoCarta1++;
            } else
            {
                comparacaoPIB = 0;
                pontuacaoCarta2++;
            }
        }
        break;
    case 4:
        if (qtdPontosTuristicos1 == qtdPontosTuristicos2)
        {
            comparacaoPtTuristicos = 2;
        }else
        {
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
        }
        break;
    case 5:
        if (densidadePop1 == densidadePop2)
        {
            comparacaoDensPop = 2;
        }else
        {
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
        }
        break;
    default:
        printf("\n===================\n");
        printf("Opção inválida");
        printf("\n===================\n");
        return 1;
    }

    // Exibição da segunda comparação
    switch (segundaComparacao)
    {
    case 1:
        printf("\nO atributo a ser comparado é População\n");
        if (comparacaoPop == 2)
        {
            printf("%s: %lu X %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            printf("Deu empate na segunda comparação!\n");
        }else
        {
            if (comparacaoPop)
            {
                printf("%s: %lu X %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
                printf("Carta %s Ganhou a segunda comparação!\n", nomeCidade1);
            }else
            {
                printf("%s: %lu X %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
                printf("Carta %s Ganhou a segunda comparação!\n", nomeCidade2);
            }
        }
        break;
    case 2:
        printf("\nO atributo a ser comparado é Área\n");
        if (comparacaoArea == 2)
        {
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
            printf("Deu empate na segunda comparação!\n");
        }else
        {
            if (comparacaoArea)
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
                printf("Carta %s Ganhou a segunda comparação!\n", nomeCidade1);
            }else
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
                printf("Carta %s Ganhou a segunda comparação!\n", nomeCidade2);
            }
        }
        break;
    case 3:
        printf("\nO atributo a ser comparado é PIB\n");
        if (comparacaoPIB == 2)
        {
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
            printf("Deu empate na segunda comparação!\n");
        }else
        {
            if (comparacaoPIB)
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
                printf("Carta %s Ganhou a segunda comparação!\n", nomeCidade1);
            }else
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
                printf("Carta %s Ganhou a segunda comparação!\n", nomeCidade2);
            }
        }
        break;
    case 4:
        printf("\nO atributo a ser comparado é Número de pontos turísticos\n");
        if (comparacaoPtTuristicos == 2)
        {
            printf("%s: %d X %s: %d\n", nomeCidade1, qtdPontosTuristicos1, nomeCidade2, qtdPontosTuristicos2);
            printf("Deu empate na segunda comparação!\n");
        }else
        {
            if (comparacaoPtTuristicos)
            {
                printf("%s: %d X %s: %d\n", nomeCidade1, qtdPontosTuristicos1, nomeCidade2, qtdPontosTuristicos2);
                printf("Carta %s Ganhou a segunda comparação!\n", nomeCidade1);
            }else
            {
                printf("%s: %d X %s: %d\n", nomeCidade1, qtdPontosTuristicos1, nomeCidade2, qtdPontosTuristicos2);
                printf("Carta %s Ganhou a segunda comparação!\n", nomeCidade2);
            }
        }
        break;
    case 5:
        printf("\nO atributo a ser comparado é Densidade Populacional\n");
        if (comparacaoDensPop == 2)
        {
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, densidadePop1, nomeCidade2, densidadePop2);
            printf("Deu empate na segunda comparação!\n");
        }else
        {
            if (comparacaoDensPop)
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, densidadePop1, nomeCidade2, densidadePop2);
                printf("Carta %s Ganhou a segunda comparação!\n", nomeCidade1);
            }else
            {
                printf("%s: %.2f X %s: %.2f\n", nomeCidade1, densidadePop1, nomeCidade2, densidadePop2);
                printf("Carta %s Ganhou a segunda comparação!\n", nomeCidade2);
            }
        }
        break;
    }

    // Exibição do vencedor geral
    printf("\n=====================================\n");
    printf("Resultado Final:\n");
    printf("%s: %d X %s: %d\n", nomeCidade1, pontuacaoCarta1, nomeCidade2, pontuacaoCarta2);
    if (pontuacaoCarta1 > pontuacaoCarta2) {
        printf("%s é o vencedor geral!\n", nomeCidade1);
    } else if (pontuacaoCarta2 > pontuacaoCarta1) {
        printf("%s é o vencedor geral!\n", nomeCidade2);
    } else {
        printf("Empate geral!\n");
    }

    return 0;
}

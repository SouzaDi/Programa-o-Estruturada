#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int escolhaP;
    int escolhaC;
    int placarP = 0;
    int placarC = 0;
    int rodada = 1;

    srand(time(NULL));

    printf("Bem-vindo ao jogo de pênaltis!\n");

    while (rodada <= 5)
    {
        printf("\nRodada %d\n", rodada);

        printf("escolhaP uma posição para chutar (1 a 9): ");
        scanf("%d", &escolhaP);

        while (escolhaP < 1 || escolhaP > 9)
        {
            printf("Posição inválida! escolhaP uma posição para chutar (1 a 9): ");
            scanf("%d", &escolhaP);
        }

        escolhaC = rand() % 9 + 1;

        printf("O goleiro escolheu a posição %d.\n", escolhaC);

        if (escolhaP == escolhaC)
        {
            printf("Defendeu!!!\n");
        }
        else
        {
            printf("Gol!!!\n");
            placarP++;
        }

        escolhaC = rand() % 9 + 1;

        printf("Agora é a vez do computador chutar.\n");

        escolhaP = rand() % 9 + 1;

        printf("Você escolheu a posição %d.\n", escolhaP);

        if (escolhaP == escolhaC)
        {
            printf("Defendeu!!!\n");
        }
        else
        {
            printf("Gol!!!\n");
            placarC++;
        }

        rodada++;
    }

    if (placarP > placarC)
    {
        printf("\nVocê venceu! Placar final: %d-%d\n", placarP, placarC);
    }
    else if (placarC > placarP)
    {
        printf("\nO computador venceu! Placar final: %d-%d\n", placarC, placarP);
    }
    else
    {
        printf("\nEmpate! Placar final: %d-%d\n", placarP, placarC);
    }

    return 0;
}
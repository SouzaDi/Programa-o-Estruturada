#include <stdio.h>

int main() {
    char equipe[50];
    int vitorias, derrotas, empates;
    float perc_vitorias, perc_derrotas, perc_empates;

    // Solicita o nome da equipe
    printf("Digite o nome da equipe: ");
    scanf("%s", equipe);

    // Solicita a quantidade de vitórias, derrotas e empates
    printf("Digite a quantidade de vitórias: ");
    scanf("%d", &vitorias);
    printf("Digite a quantidade de derrotas: ");
    scanf("%d", &derrotas);
    printf("Digite a quantidade de empates: ");
    scanf("%d", &empates);

    // Calcula os percentuais correspondentes
    int total_partidas = vitorias + derrotas + empates;
    perc_vitorias = (float)vitorias / total_partidas * 100;
    perc_derrotas = (float)derrotas / total_partidas * 100;
    perc_empates = (float)empates / total_partidas * 100;

    // Exibe os resultados na tela
    printf("\nEstatísticas da equipe %s:\n", equipe);
    printf("Vitórias: %d - %.2f%%\n", vitorias, perc_vitorias);
    printf("Derrotas: %d - %.2f%%\n", derrotas, perc_derrotas);
    printf("Empates: %d - %.2f%%\n", empates, perc_empates);

    return 0;
}

#include <stdio.h>

int main() {
    char equipe1[50], equipe2[50];
    int vitorias1, vitorias2, empates1, empates2, derrotas1, derrotas2;
    int pontos1, pontos2;

    // Solicita o nome das equipes
    printf("Digite o nome da primeira equipe: ");
    scanf("%s", equipe1);
    printf("Digite o nome da segunda equipe: ");
    scanf("%s", equipe2);

    // Solicita a quantidade de vitórias, empates e derrotas de cada equipe
    printf("Digite a quantidade de vitorias da %s: ", equipe1);
    scanf("%d", &vitorias1);
    printf("Digite a quantidade de empates da %s: ", equipe1);
    scanf("%d", &empates1);
    printf("Digite a quantidade de derrotas da %s: ", equipe1);
    scanf("%d", &derrotas1);

    printf("Digite a quantidade de vitorias da %s: ", equipe2);
    scanf("%d", &vitorias2);
    printf("Digite a quantidade de empates da %s: ", equipe2);
    scanf("%d", &empates2);
    printf("Digite a quantidade de derrotas da %s: ", equipe2);
    scanf("%d", &derrotas2);

    // Calcula a pontuação total de cada equipe
    pontos1 = vitorias1 * 3 + empates1;
    pontos2 = vitorias2 * 3 + empates2;

    // Exibe os resultados na tela
    printf("\nResultado final:\n");
    printf("%s - vitorias: %d, empates: %d, derrotas: %d, pontos: %d\n", equipe1, vitorias1, empates1, derrotas1, pontos1);
    printf("%s - vitorias: %d, empates: %d, derrotas: %d, pontos: %d\n", equipe2, vitorias2, empates2, derrotas2, pontos2);

    return 0;
}

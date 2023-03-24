#include <stdio.h>

int main() {
    float tamanho_arquivo, velocidade_internet, tempo_minutos;
    printf("Digite o tamanho do arquivo em MB: ");
    scanf("%f", &tamanho_arquivo);
    printf("Digite a velocidade da internet em Mbps: ");
    scanf("%f", &velocidade_internet);

    float tamanho_bits = tamanho_arquivo * 8 * 1024 * 1024;
    tempo_minutos = tamanho_bits / (velocidade_internet * 60);

    printf("Tempo aproximado de download: %.2f minutos\n", tempo_minutos);
    return 0;
}

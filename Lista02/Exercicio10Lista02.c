#include <stdio.h>

int main() {
    float vida, ataque, defesa, xp;
    char* nivel;

    printf("Digite a vida do jogador: ");
    scanf("%f", &vida);

    printf("Digite o ataque do jogador: ");
    scanf("%f", &ataque);

    printf("Digite a defesa do jogador: ");
    scanf("%f", &defesa);

    xp = (vida + ataque + defesa) / 3.0;

    if (xp >= 0 && xp <= 25) {
        nivel = "novato";
    } else if (xp >= 26 && xp <= 50) {
        nivel = "mago";
    } else if (xp >= 51 && xp <= 75) {
        nivel = "mago supremo";
    } else if (xp >= 76 && xp <= 100) {
        nivel = "lorde das magias";
    } else {
        printf("XP excediu o limite.\n");
        return 1;
    }

    printf("O jogador tem %0.2f de XP e se tornou %s.\n", xp, nivel);

    return 0;
}

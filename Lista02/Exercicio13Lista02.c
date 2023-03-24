#include <stdio.h>
#include <stdlib.h>

int main() {
    int classe, regiao, arma;
    
    // Menu de escolha de classe
    printf("Escolha sua classe:\n");
    printf("1) Guerreiro\n");
    printf("2) Mago\n");
    printf("3) Druida\n");
    printf("4) Sacerdote\n");
    scanf("%d", &classe);
    
    // Menu de escolha de região
    printf("Escolha sua regiao:\n");
    printf("1) Azeroth\n");
    printf("2) Azkaban\n");
    printf("3) Aurora\n");
    printf("4) Brightwood\n");
    scanf("%d", &regiao);
    
    // Menu de escolha de arma
    printf("Escolha sua arma:\n");
    printf("1) Machado cego\n");
    printf("2) Picareta invertida\n");
    printf("3) Adaga sem ponta\n");
    printf("4) Corrente sem elo\n");
    scanf("%d", &arma);
    
    // Exibir mensagem com as escolhas do jogador
    printf("Voce agora e um ");
    switch (classe) {
        case 1:
            printf("Guerreiro");
            break;
        case 2:
            printf("Mago");
            break;
        case 3:
            printf("Druida");
            break;
        case 4:
            printf("Sacerdote");
            break;
        default:
            printf("classe desconhecida");
            break;
    }
    printf(" da regiao de ");
    switch (regiao) {
        case 1:
            printf("Azeroth");
            break;
        case 2:
            printf("Azkaban");
            break;
        case 3:
            printf("Aurora");
            break;
        case 4:
            printf("Brightwood");
            break;
        default:
            printf("regiao desconhecida");
            break;
    }
    printf(" armado com ");
    switch (arma) {
        case 1:
            printf("um Machado cego");
            break;
        case 2:
            printf("uma Picareta invertida");
            break;
        case 3:
            printf("uma Adaga sem ponta");
            break;
        case 4:
            printf("uma Corrente sem elo");
            break;
        default:
            printf("arma desconhecida");
            break;
    }
    printf(".\n");
    
    return 0;
}

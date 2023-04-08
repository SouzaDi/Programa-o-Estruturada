#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, resposta, questao;
    int correto = 0;
    int incorreto = 0;
    srand(time(NULL));
    
    while (correto < 10 && incorreto < 3) {
        num1 = rand() % 100;
        num2 = rand() % 100;
        resposta = num1 + num2;
        
        printf("Quanto eh %d + %d? ", num1, num2);
        scanf("%d", &questao);
        
        if (questao == resposta) {
            printf("Correto!\n");
            correto++;
        } else {
            printf("Incorreto! A respota eh %d.\n", resposta);
            incorreto++;
        }
    }
    
    printf("Voce acertou %d  e %d errou.\n", correto, incorreto);
    
    return 0;
}
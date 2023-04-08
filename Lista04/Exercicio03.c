#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero, n, j = 1;
    srand(time(0));
    numero = rand() % 100 + 1;
    do
    {
        printf("advinhe o numero de 0 a 100 : \n");
        scanf("%d", &n);
        if (n > numero)
        {
            printf("Numero mais baixo!\n");
        }
        else if (n < numero)
        {
            printf("Numero mais alto!\n");
        }
        else
        {
            printf("Voce advinhou em %d tentativas\n", j);
        }
        j++;
    } while (n != numero && j <= 5);
    if (j > 5)
    {
        printf("Voce perdeu! O numero era %d\n", numero);
    }
    return 0;
}
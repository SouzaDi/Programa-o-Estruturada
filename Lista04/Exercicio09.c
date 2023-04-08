#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dia, mes, ano;
    int dias_meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    srand(time(NULL));

    ano = (rand() % (2023 - 2000 + 1)) + 2000;
    mes = (rand() % 12) + 1;

    if (ano % 4 == 0 && mes == 2)
    {
        dia = (rand() % 29) + 1;
    }
    else
    {
        dia = (rand() % dias_meses[mes - 1]) + 1;
    }

    printf("%02d/%02d/%d\n", dia, mes, ano);

    return 0;
}
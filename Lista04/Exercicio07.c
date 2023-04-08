#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, num;

    srand(time(NULL));

    for (i = 0; i < 3; i++)
    {
        num = (rand() % (900)) + 100;
        while (num % 5 != 0)
        {
            num = (rand() % (900)) + 100;
        }
        printf("%d ", num);
    }

    printf("\n");

    return 0;
}
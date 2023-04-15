#include <stdio.h>
int main()
{
    int n, i, j, k = 1, space;
    printf("Digite a altura da pirâmide: ");
    scanf("%d", &n);
    space = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Digite a altura do triângulo: ");
    scanf("%d", &n);
    k = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k--;
        }
        printf("\n");
        k = n - i;
    }
    return 0;
}
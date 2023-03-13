#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro qualquer:");
    scanf(" %i", &num);

    printf(" %i %i %i %i %i", num-2, num-1, num, num+1, num+2);
    return 0;
}
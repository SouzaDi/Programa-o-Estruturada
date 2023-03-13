#include <stdio.h>

int main(){

    int N1;
    int N2;

    printf("Digite um numero:");
    scanf(" %i", &N1);

    printf("Digite um outro numero:");
    scanf(" %i", &N2);  

    printf(" %i + %i = %i \n",N1 ,N2 ,N1+N2 );
    printf(" %i - %i = %i \n",N1 ,N2 ,N1-N2 );
    printf(" %i * %i = %i ",N1 ,N2 ,N1*N2 );
    return 0;
}
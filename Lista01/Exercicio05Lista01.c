#include <stdio.h>

int main(){
    int Metros;

    printf("Digite um valor inteiro em Metros:");
    scanf(" %i", &Metros);

    printf("%i Metros = %i Centimetros",Metros , Metros*100);
    return 0;
}
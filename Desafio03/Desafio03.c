#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));    
    int i, j, n, x, chance, soma;
    soma = 0;
    printf("Digite a entrada de colunas: ");
    scanf("%d", &n );

    for (i =0; i< n; i ++){
        for( j= 0; j<n; j++){
            chance = rand() %10;
            if( chance<1){
                x = 1 + rand() % 9;
                soma = soma + x;
                printf("%d ", x);
            }else{
                printf(". ");
            }
        }
        printf("\n");
    }
    if (soma>1) {
        printf("%d recursos coletados \n", soma);
    }else{
        printf("nenhum recurso coletado");
    }
}
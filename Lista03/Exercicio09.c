#include <stdio.h>

int main() {
    int i, sum = 0;
    
    // loop para somar os números de 1 a 10
    for (i = 1; i <= 10; i++) {
        sum += i;
        printf("%d ", i); // imprimir o número atual
    }
    
    printf("\nSoma total: %d", sum); // imprimir a soma total
    
    return 0;
}

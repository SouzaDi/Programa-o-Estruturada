#include <stdio.h>

int main() {
    int i, sum = 0;
    
    // loop para somar os números pares entre 0 e 100
    for (i = 0; i <= 100; i += 2) {
        sum += i;
        printf("%d ", i); // imprimir o número par atual
    }
    
    printf("\nSoma total: %d", sum); // imprimir a soma total
    
    return 0;
}

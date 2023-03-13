#include <stdio.h>

int main() {
  int valor;

  printf("Digite um valor:");
  scanf(" %i", &valor);

  printf("Valor digitado: %i \n", valor);

  printf("O dobro do valor: %i \n", valor * 2);

  printf("O triplo do valor: %i ", valor * 3);
  return 0;
}
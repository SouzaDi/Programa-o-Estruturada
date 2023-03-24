#include <stdio.h>

int main() {
    float valor_hora, horas_trabalhadas, salario_bruto, ir, inss, sindicato, salario_liquido;

    printf("Digite o valor do salario por hora: ");
    scanf("%f", &valor_hora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);

    salario_bruto = valor_hora * horas_trabalhadas;
    ir = salario_bruto * 0.11;
    inss = salario_bruto * 0.08;
    sindicato = salario_bruto * 0.05;
    salario_liquido = salario_bruto - ir - inss - sindicato;

    printf("Salario Bruto : R$ %.2f\n", salario_bruto);
    printf("Imposto de Renda (11%%) : R$ %.2f\n", ir);
    printf("INSS (8%%) : R$ %.2f\n", inss);
    printf("Sindicato (5%%) : R$ %.2f\n", sindicato);
    printf("Salario Liquido : R$ %.2f\n", salario_liquido);

    return 0;
}

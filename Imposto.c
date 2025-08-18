#include <stdio.h>

int main() {
    double salario, imposto = 0.0;
    double aliquota = 0.0, parcela = 0.0;

    printf("Digite o salario: R$ ");
    scanf("%lf", &salario);

    if (salario <= 2259.20) {
        aliquota = 0.0;
        parcela = 0.0;
    } else if (salario <= 2826.65) {
        aliquota = 0.075;
        parcela = 169.44;
    } else if (salario <= 3751.05) {
        aliquota = 0.15;
        parcela = 381.44;
    } else if (salario <= 4664.68) {
        aliquota = 0.225;
        parcela = 662.77;
    } else {
        aliquota = 0.275;
        parcela = 896.00;
    }

    imposto = salario * aliquota - parcela;

    if (imposto < 0) imposto = 0;

    printf("\nAliquota aplicada: %.1f%%\n", aliquota * 100);
    printf("Imposto retido na fonte: R$ %.2f\n", imposto);

    return 0;
}

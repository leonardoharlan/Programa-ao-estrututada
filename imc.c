#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    double peso, altura, imc;
    char buf[64];

    printf("Digite o peso (kg): ");
    scanf("%lf", &peso);

    printf("Digite a altura (m): ");
    scanf("%63s", buf);
    // troca vírgula por ponto
    for (int i = 0; buf[i]; ++i) if (buf[i] == ',') buf[i] = '.';
    altura = strtod(buf, NULL);

    if (altura <= 0) {
        printf("Altura invalida.\n");
        return 0;
    }

    imc = peso / (altura * altura);

    printf("\nSeu IMC: %.2f\n", imc);

    if (imc < 18.5)
        printf("Classificacao: Abaixo do peso\n");
    else if (imc < 25)
        printf("Classificacao: Peso normal\n");
    else if (imc < 30)
        printf("Classificacao: Sobrepeso\n");
    else if (imc < 35)
        printf("Classificacao: Obesidade grau I\n");
    else if (imc < 40)
        printf("Classificacao: Obesidade grau II\n");
    else
        printf("Classificacao: Obesidade grau III\n");

    return 0;
}

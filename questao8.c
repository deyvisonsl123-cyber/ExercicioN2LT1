#include <stdio.h>

void calcular(float a, float b,
              float *soma,
              float *subtracao,
              float *multiplicacao,
              float *divisao) {

    *soma = a + b;
    *subtracao = a - b;
    *multiplicacao = a * b;

    if(b != 0) {
        *divisao = a / b;
    } else {
        *divisao = 0;
        printf("Erro: Não existe divisão por zero!\n");
    }
}

int main() {
    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("\nDigite o segundo número: ");
    scanf("%f", &num2);

    calcular(num1, num2,
              &soma,
              &subtracao,
              &multiplicacao,
              &divisao);

    printf("\nResultados:\n");
    printf("Soma = %.2f\n", soma);
    printf("Subtração = %.2f\n", subtracao);
    printf("Multiplicação = %.2f\n", multiplicacao);

    if(num2 != 0) {
        printf("Divisão = %.2f\n", divisao);
    }

    return 0;
}

#include <stdio.h>
#include <emscripten/emscripten.h>

EMSCRIPTEN_KEEPALIVE
void calcular() {
    double a = 8.5;
    double b = 2.5;

    double soma = a + b;
    double subtracao = a - b;
    double multiplicacao = a * b;
    double divisao = a / b;

    printf("=== CALCULADORA EM C (WebAssembly) ===\n");
    printf("A = %.2f\n", a);
    printf("B = %.2f\n\n", b);

    printf("Soma: %.2f + %.2f = %.2f\n", a, b, soma);
    printf("Subtração: %.2f - %.2f = %.2f\n", a, b, subtracao);
    printf("Multiplicação: %.2f x %.2f = %.2f\n", a, b, multiplicacao);
    printf("Divisão: %.2f ÷ %.2f = %.2f\n", a, b, divisao);
}

int main() {
    calcular();
    return 0;
}

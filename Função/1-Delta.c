#include <stdio.h>

// Função para calcular o delta (discriminante) de uma equação quadrática
double calcular_delta(double a, double b, double c) {
    return (b * b) - (4 * a * c); // Fórmula do delta: b^2 - 4ac
}

int main() {
    double a, b, c;
    
    // Leitura dos coeficientes
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);
    
    // Chama a função calcular_delta
    double delta = calcular_delta(a, b, c);
    
    // Exibe o resultado
    printf("O delta é: %.2lf\n", delta);
    
    return 0;
}

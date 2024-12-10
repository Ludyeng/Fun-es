#include <stdio.h>

// Função para calcular os juros simples
double calcular_juros(double c, int m, double t) {
    return c * m * t; // Fórmula dos juros simples: j = c * m * t
}

int main() {
    double c, t; // c: valor do empréstimo, t: taxa de juros
    int m;        // m: número de meses
    
    // Leitura dos valores: valor do empréstimo, número de meses e taxa de juros
    printf("Digite o valor do empréstimo (c): ");
    scanf("%lf", &c);
    printf("Digite o número de meses (m): ");
    scanf("%d", &m);
    printf("Digite a taxa de juros mensal (t) em porcentagem: ");
    scanf("%lf", &t);
    
    // Converte a taxa de juros para decimal
    t = t / 100.0;
    
    // Chama a função para calcular os juros e imprime o resultado
    double juros = calcular_juros(c, m, t);
    printf("Os juros cobrados no empréstimo são: %.2lf\n", juros);
    
    return 0;
}



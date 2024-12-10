#include <stdio.h>

// Função para comparar dois números e retornar o maior
double maior_numero(double x, double y) {
    if (x > y) {
        return x; // Retorna x se x for maior que y
    } else {
        return y; // Caso contrário, retorna y
    }
}

int main() {
    double x, y;
    
    // Leitura dos números
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite o valor de y: ");
    scanf("%lf", &y);
    
    // Chama a função maior_numero e imprime o maior número
    double maior = maior_numero(x, y);
    printf("O maior número é: %.2lf\n", maior);
    
    return 0;
}


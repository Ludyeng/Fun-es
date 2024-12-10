#include <stdio.h>
#include <math.h>  // Para a função sqrt()

// Função para calcular as raízes da equação do segundo grau
void calcular_raizes(int a, int b, int c) {
    double delta = b * b - 4 * a * c;  // Cálculo do discriminante
    
    // Caso 1: Delta > 0 (duas raízes reais distintas)
    if (delta > 0) {
        double raiz1 = (-b + sqrt(delta)) / (2 * a);
        double raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As duas raízes são: %.2lf e %.2lf\n", raiz1, raiz2);
    }
    // Caso 2: Delta == 0 (uma raiz real)
    else if (delta == 0) {
        double raiz = -b / (2 * a);
        printf("A única raiz é: %.2lf\n", raiz);
    }
    // Caso 3: Delta < 0 (não existem raízes reais)
    else {
        printf("Não existem raízes reais.\n");
    }
}

int main() {
    int a, b, c;
    
    // Leitura dos coeficientes a, b e c
    printf("Digite os coeficientes da equação (a, b, c):\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    
    // Chama a função para calcular as raízes
    calcular_raizes(a, b, c);
    
    return 0;
}




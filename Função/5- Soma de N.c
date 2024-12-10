#include <stdio.h>

// Função para calcular a soma dos n primeiros termos de uma P.A.
double soma_pa(int a1, int an, int n) {
    // Fórmula da soma dos n primeiros termos: Sn = n * (a1 + an) / 2
    return (n * (a1 + an)) / 2.0;
}

int main() {
    int a1, an, n;
    
    // Leitura dos valores: primeiro termo, n-ésimo termo e número de termos
    printf("Digite o primeiro termo (a1): ");
    scanf("%d", &a1);
    printf("Digite o n-ésimo termo (an): ");
    scanf("%d", &an);
    printf("Digite o número de termos (n): ");
    scanf("%d", &n);
    
    // Chama a função soma_pa e imprime o resultado
    double soma = soma_pa(a1, an, n);
    printf("A soma dos %d primeiros termos da P.A. é: %.2lf\n", n, soma);
    
    return 0;
}


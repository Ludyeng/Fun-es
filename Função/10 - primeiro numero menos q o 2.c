#include <stdio.h>

// Função para calcular a soma dos números pares entre a e b
int soma_pares(int a, int b) {
    int soma = 0;
    
    // Começamos do primeiro número par maior que a
    if (a % 2 != 0) {
        a++;  // Se 'a' não for par, começamos do próximo número par
    }
    
    // Somamos todos os números pares entre a e b
    for (int i = a; i < b; i += 2) {
        soma += i;
    }
    
    return soma;
}

int main() {
    int a, b;
    
    // Leitura dos números a e b
    printf("Digite o primeiro número (a): ");
    scanf("%d", &a);
    printf("Digite o segundo número (b): ");
    scanf("%d", &b);
    
    // Chama a função para calcular a soma dos números pares e imprime o resultado
    int resultado = soma_pares(a, b);
    printf("A soma dos números pares entre %d e %d é: %d\n", a, b, resultado);
    
    return 0;
}





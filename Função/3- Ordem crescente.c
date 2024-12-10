#include <stdio.h>

// Função para imprimir os números de 1 a n
void imprimir_numeros(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i); // Imprime o número atual
    }
    printf("\n"); // Quebra de linha após a impressão dos números
}

int main() {
    int n;
    
    // Leitura do número n
    printf("Digite um número n: ");
    scanf("%d", &n);
    
    // Chama a função para imprimir os números de 1 a n
    imprimir_numeros(n);
    
    return 0;
}


#include <stdio.h>

// Função para imprimir os divisores de um número
void imprimir_divisores(int n) {
    printf("Os divisores de %d são: ", n);
    
    // Verifica e imprime os divisores de 1 até n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);  // Imprime o divisor
        }
    }
    printf("\n");
}

int main() {
    int n;
    
    // Leitura do número positivo
    printf("Digite um número positivo: ");
    scanf("%d", &n);
    
    // Chama a função para imprimir os divisores
    imprimir_divisores(n);
    
    return 0;
}





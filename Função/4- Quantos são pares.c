#include <stdio.h>

// Função para contar quantos números são pares
int contar_pares(int a, int b, int c) {
    int count = 0; // Inicializa o contador de números pares
    
    // Verifica se 'a' é par
    if (a % 2 == 0) {
        count++;
    }
    
    // Verifica se 'b' é par
    if (b % 2 == 0) {
        count++;
    }
    
    // Verifica se 'c' é par
    if (c % 2 == 0) {
        count++;
    }
    
    return count; // Retorna a quantidade de números pares
}

int main() {
    int a, b, c;
    
    // Leitura dos números a, b, c
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    
    // Chama a função contar_pares e imprime o resultado
    int pares = contar_pares(a, b, c);
    printf("Quantidade de números pares: %d\n", pares);
    
    return 0;
}



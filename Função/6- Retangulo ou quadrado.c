#include <stdio.h>

// Função para verificar se é um quadrado ou retângulo
int verificar_figura(int b, int h) {
    if (b == h) {
        return 1; // É um quadrado
    } else {
        return 0; // É um retângulo
    }
}

int main() {
    int b, h;
    
    // Leitura dos valores da base e altura
    printf("Digite a base (b): ");
    scanf("%d", &b);
    printf("Digite a altura (h): ");
    scanf("%d", &h);
    
    // Chama a função verificar_figura e imprime o resultado
    int resultado = verificar_figura(b, h);
    
    if (resultado == 1) {
        printf("A figura é um quadrado.\n");
    } else {
        printf("A figura é um retângulo.\n");
    }
    
    return 0;
}



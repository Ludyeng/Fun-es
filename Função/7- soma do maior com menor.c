#include <stdio.h>

// Função para calcular a soma do maior com o menor número
int soma_maior_menor(int a, int b, int c) {
    int maior, menor;
    
    // Encontrar o maior número
    if (a > b && a > c) {
        maior = a;
    } else if (b > a && b > c) {
        maior = b;
    } else {
        maior = c;
    }
    
    // Encontrar o menor número
    if (a < b && a < c) {
        menor = a;
    } else if (b < a && b < c) {
        menor = b;
    } else {
        menor = c;
    }
    
    // Retornar a soma do maior com o menor
    return maior + menor;
}

int main() {
    int a, b, c;
    
    // Leitura dos números a, b e c
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);
    
    // Chama a função soma_maior_menor e imprime o resultado
    int soma = soma_maior_menor(a, b, c);
    printf("A soma do maior com o menor número é: %d\n", soma);
    
    return 0;
}




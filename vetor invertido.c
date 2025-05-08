#include <stdio.h> // Biblioteca

int main() {
    int vetor[5]; // Declara um vetor de inteiros com 5 posições

    // Pede ao usuário que insira 5 números
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d° numero: ", i + 1); // Solicita o número ao usuário
        scanf("%d", &vetor[i]); // Lê o número e armazena no vetor
    }

    // Imprime o vetor na ordem inversa
    printf("Vetor invertido: ");
    for (int i = 4; i >= 0; i--) { // Faz invertido, do 4 ao 0
        printf("%d ", vetor[i]); // Imprime o número na posição i
    }
    
    return 0; // Retorna 0 ao sistema, indicando que o programa terminou com sucesso
}
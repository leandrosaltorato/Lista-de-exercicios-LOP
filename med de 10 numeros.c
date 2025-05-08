#include <stdio.h> // Biblioteca

int main() { // Função principal
    int numeros[10]; // Array para armazenar 10 números
    int soma = 0; // Variável para armazenar a soma dos números
    float media; // Variavel para calcular a média
    
    // Solicita ao usuário que insira 10 números
    for (int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]); // Lê o número e armazena no array
        soma += numeros[i]; // Adiciona o número a soma
    }
    // Calcula e exibe a média
    media = soma / 10.0; // Calcula a média
    printf("A media dos numeros e: %.2f\n", media); // Imprime a média
    return 0; // Encerra o programa retornando 0
}
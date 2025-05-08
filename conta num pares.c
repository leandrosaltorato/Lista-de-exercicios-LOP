#include <stdio.h> // Biblioteca

int main() { // Função principal
    int numeros[10]; // Array para armazenar 10 números
    int contador = 0; // Variável para contar quantos números são pares

    // Pede que o usuário que insira 10 números
    for (int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1); // Solicita o número ao usuário
        scanf("%d", &numeros[i]); // Lê o número e armazena no array
    }

    // Conta os números pares
    for (int i = 0; i < 10; i++) { // Repete ate 10 numeros
        if (numeros[i] % 2 == 0) { // Verifica se o número é par
        contador++; // Incrementa o contador se o número for par
        }
    }

    // Exibe o resultado
    printf("Quantidade de numeros pares: %d\n", contador); // Imprime a quantidade de números pares

    return 0; // Encerra o programa retornando 0
}
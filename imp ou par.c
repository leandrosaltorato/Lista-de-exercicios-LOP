#include <stdio.h> // Biblioteca 

int main() { // Função principal
    int numero; // Declara uma variável inteira para armazenar o número escrito pelo usuário

    // Pede ao usuário que escreva um número inteiro
    printf("Digite um número inteiro: ");
    // Lê o número inteiro digitado pelo usuário e armazena na variável 'numero'
    scanf("%d", &numero);

    // Verifica se o número é par
    if (numero % 2 == 0) {
        // Se o resto da divisão do número por 2 for 0, imprime que o número é par
        printf("O número %d é par.\n", numero);
    } else {
        // Se o resto da divisão do número por 2 não for 0, imprime que o número é ímpar
        printf("O número %d é ímpar.\n", numero);
    }

    return 0; // Encerra o programa retornando 0
}
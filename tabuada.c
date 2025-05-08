#include <stdio.h> // Biblioteca

int main() { // Função principal
    int numero; // Declara uma variável inteira para armazenar o número fornecido pelo usuário

    // Pede ao usuário que insira um número
    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &numero); // Lê o número digitado pelo usuário e armazena na variável 'numero'

    // Exibe a tabuada do número de 1 a 10.
    printf("Tabuada do %d:\n", numero); // Imprime uma mensagem indicando qual tabuada aparecerá
    
    // Loop de 1 a 10 para calcular e exibir a tabuada
    for (int i = 1; i <= 10; i++) { // Inicia um loop for com a variável 'i' começando em 1,
                                     // e continua enquanto 'i' for menor ou igual a 10,
                                     // incrementando 'i' em 1 a cada iteração
        // Calcula o resultado da multiplicação e imprime
        printf("%d x %d = %d\n", numero, i, numero * i); // Imprime a operação da tabuada
    }

    return 0; // Encerra o programa retornando 0
}
#include <stdio.h> // Biblioteca

int main() { // Função principal
    int numeros[10]; // Array para armazenar 10 números
    int maior, menor; // Variáveis para armazenar o maior e menor número

    // Solicita ao usuário que insira 10 números
    for (int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]); // Lê o número e armazena no array
    }

    maior = menor = numeros[0]; // Inicializa maior e menor com o primeiro número

    // Encontra o maior e menor número
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i]; // Atualiza maior se o número atual for maior
        }
        if (numeros[i] < menor) {
            menor = numeros[i]; // Atualiza menor se o número atual for menor
        }
    }

    // Exibe os resultados
    printf("Maior numero: %d\n", maior); // Mostra o maior número
    printf("Menor numero: %d\n", menor); // Mostra o menor número
    return 0; // Encerra o programa retornando 0
}
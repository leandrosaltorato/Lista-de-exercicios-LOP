#include <stdio.h> // Biblioteca

int main() { // Função principal
    int num1, num2; // Declara duas variáveis inteiras para armazenar os números

    // Pede para usuário que digite o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%d", &num1); // Lê o primeiro número e armazena em num1

    // Pede para usuário que digite o segundo número
    printf("Digite o segundo número: ");
    scanf("%d", &num2); // Lê o segundo número e armazena em num2

    // Compara os dois números para ver qual é o maior
    if (num1 > num2) {
        // Se num1 é maior que num2, exibe num1
        printf("O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        // Se num2 é maior que num1, exibe num2
        printf("O maior número é: %d\n", num2);
    } else {
        // Se os números são iguais, informa que são iguais
        printf("Os números são iguais: %d\n", num1);
    }

    return 0; // Encerra o programa retornando 0
}
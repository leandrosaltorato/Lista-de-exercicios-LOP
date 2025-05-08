#include <stdio.h> // Biblioteca

int main() { // Função principal
    int numero; // Variável para armazenar o número digitado pelo usuário
    int fatorial = 1; // Variável para armazenar o resultado do fatorial, inicializada em 1

    // Solicita ao usuário que digite um número
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero); // Le o número fornecido pelo usuário

    // Verifica se o número é negativo
    if (numero < 0) {
        printf("Fatorial de um numero negativo nao existe.\n"); // Informa que o fatorial não existe para números negativos
    } else {
        for (int i = 1; i <= numero; i++) { // Calcula o fatorial
            fatorial *= i; // Multiplica o fatorial pelo número atual
        }

        // Exibe o resultado
        printf("Fatorial de %d é: %d\n", numero, fatorial); // Imprime o fatorial calculado
    }

    return 0; // Encerra o prograa retornando 0
}
#include <stdio.h> // Biblioteca

int main() { // Função principal 
    int n1, n2, res; // Declara as variáveis inteiras para armazenar os números e o resultado
    int menu; // Declara uma variável inteira para armazenar a escolha do operador

    // Exibe as opções de operação para o usuário
    printf("Escolha a operação:\n");
    printf("1. Soma \n");
    printf("2. Subtração \n");
    printf("3. Multiplicação \n");
    printf("4. Divisão \n");
    scanf("%d", &menu);// Lê a escolha do menu do usuário e armazena na variável 'menu'
    
    // Switch para determinar qual operação realizar com base na escolha do usuário
    switch (menu) {
        case 1: // Caso o usuário escolha 1 
            printf("Digite o primeiro numero \n"); // Pede o primeiro número
            scanf("%d", &n1); // Lê o primeiro número e armazena em n1
            printf("Digite o segundo numero \n"); // Pede o segundo número
            scanf("%d", &n2); // Lê o segundo número e armazena em n2
            res = (n1 + n2); // Faz a soma dos dois números e armazena o resultado em 'res'
            printf("O resultado é: %d \n", res); // Aparece o resultado da soma
            break; // Sai do switch após executar o caso

        case 2: // Caso o usuário escolha 2
            printf("Digite o primeiro numero \n"); // Pede o primeiro número
            scanf("%d", &n1); // Lê o primeiro número e armazena em n1
            printf("Digite o segundo numero \n"); // Pede o segundo número
            scanf("%d", &n2); // Lê o segundo número e armazena em n2
            res = (n1 - n2); // Faz a subtração dos dois números e armazena o resultado em 'res'
            printf("O resultado é: %d \n", res); // Aparece o resultado da subtração
            break; // Sai do switch após executar o caso

        case 3: // Caso o usuário escolha 3 
            printf("Digite o primeiro numero \n"); // Pede o primeiro número
            scanf("%d", &n1); // Lê o primeiro número e armazena em n1
            printf("Digite o segundo numero \n"); // Pede o segundo número
            scanf("%d", &n2); // Lê o segundo número e armazena em n2
            res = (n1 * n2); // Faz a multiplicação dos dois números e armazena o resultado em 'res'
            printf("O resultado é: %d \n", res); // Aparece o resultado da multiplicação
            break; // Sai do switch após executar o caso

        case 4: // Caso o usuário escolha 4 
            printf("Digite o primeiro numero \n"); // Pede o primeiro número
            scanf("%d", &n1); // Lê o primeiro número e armazena em n1
            printf("Digite o segundo numero \n"); // Pede o segundo número
            scanf("%d", &n2); // Lê o segundo número e armazena em n2
            res = (n1 / n2); // Faz a divisão dos dois números e armazena o resultado em 'res'
            printf("O resultado é: %d \n", res); // Aparece o resultado da divisão
            break; // Sai do switch após executar o caso

        default: // Caso o usuário não escolha uma opção válida de 1 até 4
            printf("Opção Invalida! Programa encerrado. \n"); // Informa que a opção é inválida
            return 0; // Encerra o programa
    }
    return 0; // Encerra o programa retornando 0
}
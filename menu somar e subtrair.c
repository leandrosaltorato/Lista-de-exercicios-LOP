#include <stdio.h> // Biblioteca 

int main() { // Função principal 
    int opcao; // Declara uma variável inteira para armazenar a opção escolhida pelo usuário
    int n1, n2, res; // Declara variáveis inteiras para armazenar os números e o resultado da operação

    do { // Início do loop do e while, exibe o menu de opções para o usuário
        printf("\nMenu:\n");
        printf("1. Somar\n"); // Opção para somar dois números
        printf("2. Subtrair\n"); // Opção para subtrair dois números
        printf("3. Sair\n"); // Opção para sair do programa
        printf("Escolha uma opcao: "); // Solicita que o usuário escolha uma opção
        scanf("%d", &opcao); // Lê a opção escolhida pelo usuário e armazena na variável 'opcao'

        switch (opcao) { // Início da estrutura de controle switch para tratar a opção escolhida
            case 1: // Caso o usuário escolha a opção 1 
                printf("Digite o primeiro numero: "); // Pede o primeiro número
                scanf("%d", &n1); // Lê o primeiro número e armazena na variável 'n1'
                printf("Digite o segundo numero: "); // Pede o segundo número
                scanf("%d", &n2); // Lê o segundo número e armazena na variável 'n2'
                res = n1 + n2; // Realiza a soma dos dois números e armazena o resultado em 'res'
                printf("Resultado da soma: %d\n", res); // Mostra o resultado da soma
                break; // Sai do switch após executar o caso

            case 2: // Caso o usuário escolha a opção 2 
                printf("Digite o primeiro numero: "); // Pede o primeiro número
                scanf("%d", &n1); // Lê o primeiro número e armazena na variável 'n1'
                printf("Digite o segundo numero: "); // Pede o segundo número
                scanf("%d", &n2); // Lê o segundo número e armazena na variável 'n2'
                res = n1 - n2; // Realiza a subtração dos dois números e armazena o resultado em 'res'
                printf("Resultado da subtracao: %d\n", res); // Mostra o resultado da subtração
                break; // Sai do switch após executar o caso

            case 3: // Caso o usuário escolha a opção 3
                printf("Saindo do programa...\n"); // Mostra uma mensagem de saída
                break; // Sai do switch após executar o caso

            default: // Caso a opção digitada não seja 1, 2 ou 3)
                printf("Opcao invalida! Tente novamente.\n"); // Informa que a opção é inválida
                break; // Sai do switch após executar o caso
        }
    } while (opcao != 3); // O loop continua enquanto a opção escolhida não for 3 (Sair)

    return 0; // Encerra o programa retornando 0
}
#include <stdio.h> // Biblioteca

// Definição da estrutura Pessoa
struct Pessoa {
    char nome[20]; // Array de caracteres para armazenar a nome da pessoa
    int idade;     // Inteiro para armazenar a idade da pessoa
};

int main() { 
    struct Pessoa pessoa1, pessoa2; // Declaração de duas variáveis do tipo Pessoa

    // Leitura dos dados da primeira pessoa
    printf("Digite o nome da primeira pessoa: "); // Solicita o nome
    scanf(" %c", &pessoa1.nome[0]); // Lê o nome da primeira pessoa (armazenado na primeira posição do array)
    printf("Digite a idade da primeira pessoa: "); // Solicita a idade
    scanf("%d", &pessoa1.idade); // Lê a idade da primeira pessoa

    // Leitura dos dados da segunda pessoa
    printf("Digite o nome da segunda pessoa: "); // Solicita o nome
    scanf(" %c", &pessoa2.nome[0]); // Lê o nome da segunda pessoa (armazenado na primeira posição do array)
    printf("Digite a idade da segunda pessoa: "); // Solicita a idade
    scanf("%d", &pessoa2.idade); // Lê a idade da segunda pessoa

    // Comparação das idades
    if (pessoa1.idade > pessoa2.idade) { // Verifica se a primeira pessoa é mais velha
        printf("Pessoa %c é mais velha que Pessoa %c.\n", pessoa1.nome[0], pessoa2.nome[0]); // Imprime o resultado
    } else if (pessoa1.idade < pessoa2.idade) { // Verifica se a segunda pessoa é mais velha
        printf("Pessoa %c é mais velha que Pessoa %c.\n", pessoa2.nome[0], pessoa1.nome[0]); // Imprime o resultado
    } else { // Se as idades forem iguais
        printf("Pessoa %c e Pessoa %c têm a mesma idade.\n", pessoa1.nome[0], pessoa2.nome[0]); // Imprime que têm a mesma idade
    }

    return 0; // Encerra o programa retornando 0
}

#include <stdio.h> // Biblioteca 

// Define uma estrutura chamada Aluno que contém um nome e uma média
typedef struct {
    char nome[15];   // Nome 
    float media;     // Média final do aluno
} Aluno;

int main() { // Função principal 
    Aluno alunos[3]; // Array para armazenar 3 alunos
    char nome_busca[15]; // Array para armazenar o nome a ser buscado
    int encontrado; // Flag para verificar se o aluno foi encontrado
    char opcao; // Variável para armazenar a opção do usuário para continuar ou não

    // Cadastro dos 3 alunos
    for (int i = 0; i < 3; i++) {
        // Solicita o nome do aluno
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome); // Lê o nome do aluno

        // Solicita a média final do aluno
        printf("Digite a média final do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media); // Lê a média e armazena na estrutura
    }

    do {
        encontrado = 0; // Reseta o encontrado em 0

        // Solicita o nome para busca
        printf("Digite o nome do aluno para buscar: ");
        scanf("%14s", nome_busca); // Lê o nome a ser buscado

        // Busca pelo aluno com o nome informado
        for (int i = 0; i < 3; i++) {
            int igual = 1; // Assume que os nomes são iguais inicialmente
            for (int j = 0; j < 15; j++) { // Compara cada caractere do nome
                if (alunos[i].nome[j] != nome_busca[j]) { // Se os caracteres não forem iguais
                    igual = 0; // Marca como não igual
                    break; // Sai do loop de comparação
                }
            }
            if (igual) { // Se os nomes forem iguais
                // Exibe os dados do aluno encontrado
                printf("Aluno encontrado:\n");
                printf("Nome: %s\n", alunos[i].nome);
                printf("Média: %.2f\n", alunos[i].media);
                encontrado = 1; // Marca que o aluno foi encontrado
                break; // Sai do loop de busca
            }
        }

        // Se o aluno não foi encontrado, exibe uma mensagem
        if (!encontrado) {
            printf("Aluno não encontrado.\n");
        }

        // Pergunta se o usuário deseja tentar buscar outro aluno
        printf("Deseja buscar outro aluno? (s/n): ");
        scanf(" %c", &opcao); // Lê a opção do usuário
    } while (opcao == 's' || opcao == 'S'); // Continua enquanto a opção for 's' ou 'S'

    return 0; // Encerra o programa retornando 0
}

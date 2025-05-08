#include <stdio.h> // Biblioteca 

// Define uma nova estrutura chamada Aluno
typedef struct {
    char nome[50]; // Campo para armazenar o nome do aluno 
    int idade;     // Campo para armazenar a idade do aluno
    float nota;    // Campo para armazenar a nota do aluno
} Aluno;

int main() {
    Aluno turma[2]; // Declara um array de 2 elementos do tipo Aluno

    // Loop para cadastrar os alunos
    for(int i = 0; i < 2; i++) { 
        printf("Digite o nome do aluno %d: \n", i + 1); // Solicita o nome do aluno
        scanf(" %[^\n]", turma[i].nome); // Lê o nome do aluno, permitindo espaços

        printf("Digite a idade do aluno %d: \n", i + 1); // Solicita a idade do aluno
        scanf("%d", &turma[i].idade); // Lê a idade do aluno e armazena na estrutura

        printf("Digite a nota do aluno %d: \n", i + 1); // Solicita a nota do aluno
        scanf("%f", &turma[i].nota); // Lê a nota do aluno e armazena na estrutura
    }   

    // Imprime os dados dos alunos cadastrados
    printf("Dados dos Alunos:\n"); // Mensagem para os dados dos alunos
    for(int i = 0; i < 2; i++) { // Sobre os alunos cadastrados
        // Imprime o nome, a idade e a nota de cada aluno
        printf("Aluno: %s, Idade: %d, Nota: %.2f\n", turma[i].nome, turma[i].idade, turma[i].nota);
    }
    
    return 0; // Encerra o programa retornando 0
}
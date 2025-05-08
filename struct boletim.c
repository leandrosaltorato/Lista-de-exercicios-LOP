#include <stdio.h> // Biblioteca

// Definição da estrutura Aluno
struct Aluno {
    char nome[50];   // Array de caracteres para armazenar o nome do aluno
    float nota1;     // Variável para armazenar a primeira nota
    float nota2;     // Variável para armazenar a segunda nota
    float nota3;     // Variável para armazenar a terceira nota
};

int main() {
    struct Aluno aluno; // Declara uma variável do tipo Aluno para armazenar os dados do aluno
    float media;        // Variável do tipo float para armazenar a média das notas

    // Leitura do nome do aluno
    printf("Digite o nome do aluno: "); 
    scanf("%s", aluno.nome); 
    // Armazena na variável o nome do aluno

    // Leitura da primeira nota
    printf("Digite a nota 1: ");
    scanf("%f", &aluno.nota1); 
    // Lê a primeira nota do aluno como número de ponto flutuante

    // Leitura da segunda nota
    printf("Digite a nota 2: ");
    scanf("%f", &aluno.nota2); 
    // Lê a segunda nota do aluno

    // Leitura da terceira nota
    printf("Digite a nota 3: ");
    scanf("%f", &aluno.nota3); 
    // Lê a terceira nota do aluno

    // Cálculo da média das três notas
    media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3; // Soma as três notas e divide por 3 para calcular a média

    // Exibe a média do aluno com duas casas decimais
    printf("Média do aluno %s é: %.2f\n", aluno.nome, media);

    // Verifica se o aluno foi aprovado 
    if (media >= 6.0) {
        printf("Aluno aprovado!\n"); 
        // Caso a média seja 6 ou maior, imprime que o aluno foi aprovado
    } else {
        printf("Aluno reprovado.\n"); 
        // Caso contrário, imprime que o aluno foi reprovado
    }

    return 0; // Encerra o programa retornando 0
}

#include <stdio.h> // Biblioteca 

int main() { 
    float media, soma = 0.0, medgeral; // Variável para armazenar a média de cada aluno
                                       // Variável para acumular a soma das médias e a média geral
    
    // Loop de 5 vezes, uma para cada aluno
    for (int i = 0; i < 5; i++) {
        // Solicita ao usuário que digite a média final do aluno atual
        printf("Digite a média final do aluno %d: ", i + 1);
        // Lê a média digitada pelo usuário e a armazena na variável 'media'
        scanf("%f", &media);
        // Adiciona a média do aluno atual à soma total
        soma += media;
    }
    // Calcula a média geral dividindo a soma das médias pelo número total de alunos (5)
    medgeral = soma / 5;
    // Exibe a média geral da turma com uma casa decimal
    printf("Média geral da turma: %.1f\n", medgeral);
    return 0; // Encerra o programa retornando 0
}

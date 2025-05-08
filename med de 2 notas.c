#include <stdio.h> // Biblioteca

int main() { // Função principal
    float nota1, nota2, media;  // Declara as variáveis para armazenar as notas e a média

    // Pede ao usuário a primeira nota e armazena em nota1
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    // Pede ao usuário a segunda nota e armazena em nota2
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Calcula a média das duas notas
    media = (nota1 + nota2) / 2;

    // Verifica se a média é maior ou igual a 7
    if (media >= 7.0) {
        // Se sim, informa que o aluno foi aprovado
        printf("Aprovado\n");
    } else {
        // Caso contrário, informa que o aluno foi reprovado
        printf("Reprovado\n");
    }

    // Encerra o programa retornando 0 
    return 0;
}

#include <stdio.h> // Biblioteca 

int main() { // Função principal
    int idade;  // Declara a variável para armazenar a idade

    // Pede ao usuário que digite a idade
    printf("Digite sua idade: ");
    // Lê a idade digitada pelo usuário e armazena na variável idade
    scanf("%d", &idade);

    // Verifica se a idade é menor que 16
    if (idade < 16) {
        // Se for, o usuário não pode votar
        printf("Você não pode votar.\n");
    } 
    // Verifica se a idade está entre 16 e 17 inclusive, ou se é maior ou igual a 70
    else if ((idade >= 16 && idade < 18) || idade >= 70) {
        // Se estiver, o voto é opcional para o usuário
        printf("O voto é facultativo.\n");
    } 
    // Se a idade for entre 18 e 69 inclusive
    else if (idade >= 18 && idade < 70) {
        // O voto é obrigatório para o usuário
        printf("O voto é obrigatório.\n");
    }

    return 0;// Encerra o programa retornando 0
}

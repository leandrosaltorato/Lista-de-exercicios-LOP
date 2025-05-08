#include <stdio.h> // Biblioteca 

int main() { // Função principal 
    int soma = 0; // Declara uma variável inteira para armazenar a soma, inicialmente em 0

    // Loop pelos números pares de 2 a 200
    for (int i = 2; i <= 200; i += 2) { // Inicia o loop com 'i' igual a 2 (primeiro número par),
                                         // e incrementa 'i' em 2 a cada iteração, 
                                         // continuando enquanto 'i' for menor ou igual a 200
        soma += i; // Adiciona o valor atual de 'i' à variável 'soma'
    }

    // Exibe o resultado da soma dos números pares
    printf("A soma dos 100 primeiros números pares (de 1 a 200) é: %d\n", soma); // Imprime a soma total

    return 0; // Encerra o programa retornando 0
}
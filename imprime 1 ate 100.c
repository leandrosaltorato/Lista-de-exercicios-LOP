#include <stdio.h> // Biblioteca

int main() { // Função principal 
    // Loop de 1 a 100
    printf ("Numeros do 1 até o 100 \n"); // Aparece ao usuario que irá de 1 até 100 
    for (int i = 1; i <= 100; i++) { // Inicia um loop for com a variável 'i' começando em 1, 
                                      // e continua enquanto 'i' for menor ou igual a 100, 
                                      // adicionando 'i' em 1 a cada iteração
        printf("%d\n", i); // Imprime o valor atual de 'i' seguido de uma nova linha
    }
    return 0; // Encerra o programa retornando 0
}
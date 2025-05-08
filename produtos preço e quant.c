#include <stdio.h> // Biblioteca

// Define uma nova estrutura chamada Produto
typedef struct {
    char nome[50];    // Variavel para armazenar o nome do produto 
    float preco;      // Variavel para armazenar o preço unitário do produto
    int quantidade;   // Variavel para armazenar a quantidade em estoque do produto
} Produto;

int main() {
    Produto lista[5]; // Declara um array de 5 elementos do tipo Produto

    // Repetição para cadastrar 5 produtos
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do produto %d: ", i + 1); // Pede o nome do produto
        scanf(" %[^\n]", lista[i].nome); // Lê o nome do produto, permitindo espaços

        printf("Digite o preco do produto %d: ", i + 1); // Pede o preço do produto
        scanf("%f", &lista[i].preco); // Le o preço do produto e armazena na estrutura

        printf("Digite a quantidade do produto %d: ", i + 1); // Pede a quantidade do produto
        scanf("%d", &lista[i].quantidade); // Le a quantidade em estoque e armazena na estrutura
    }

    printf("\nTotal de cada produto:\n"); // Mensagem para os totais dos produtos
    // Repetição para imprimir o total de cada produto 
    for (int i = 0; i < 5; i++) { 
        float total = lista[i].preco * lista[i].quantidade; // Calcula o total (preço * quantidade)
        // Imprime o nome do produto e o total formatado com duas casas decimais
        printf("Produto: %s, Total: R$ %.2f\n", lista[i].nome, total);
    }

    return 0; // Encerra o programa retornando 0
}
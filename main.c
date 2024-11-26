#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

Produto estoque[MAX_PRODUTOS];
int totalProdutos = 0;

void adicionarProduto() {
    if (totalProdutos >= MAX_PRODUTOS) {
        printf("Estoque cheio!\n");
        return;
    }
    
    Produto p;
    printf("Digite o nome do produto: ");
    scanf("%s", p.nome);
    printf("Digite a quantidade: ");
    scanf("%d", &p.quantidade);
    printf("Digite o preço: ");
    scanf("%f", &p.preco);
    
    estoque[totalProdutos] = p;
    totalProdutos++;
    printf("Produto adicionado com sucesso!\n");
}


int main() {
    int opcao;
    
    do {
        printf("\nMenu Principal:\n");
        printf("1. Adicionar produto\n");
        printf("2. Consultar estoque\n");
        printf("3. Vender produto\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                adicionarProduto();
                break;
            case 2:
                consultarEstoque();
                break;
            case 3:
                venderProduto();
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 4);
    
    return 0;
}
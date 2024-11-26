#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

void venderProduto() {
    char nome[50];
    int quantidade;
    
    printf("Digite o nome do produto a ser vendido: ");
    scanf("%s", nome);
    printf("Digite a quantidade a ser vendida: ");
    scanf("%d", &quantidade);
    
    for (int i = 0; i < totalProdutos; i++) {
        if (strcmp(estoque[i].nome, nome) == 0) {
            if (estoque[i].quantidade >= quantidade) {
                estoque[i].quantidade -= quantidade;
                printf("Venda realizada com sucesso!\n");
                return;
            } else {
                printf("Quantidade solicitada maior que a disponível!\n");
                return;
            }
        }
    }
    printf("Produto não encontrado!\n");
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
#include <stdio.h>
#include <string.h>


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
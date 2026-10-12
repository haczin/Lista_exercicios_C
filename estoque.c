#include <stdio.h>

#define QTD 3

struct Produto {
    int codigo;
    char nome[50];
    float preco;
};


void cadastrarProdutos(struct Produto estoque[]) {
    for (int i = 0; i < QTD; i++) {
        printf("\n--- Produto %d ---\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &estoque[i].codigo);
        printf("Nome: ");
        scanf(" %49[^\n]", estoque[i].nome);
        printf("Preco: ");
        scanf("%f", &estoque[i].preco);
    }
}


void listarProdutos(struct Produto estoque[]) {
    printf("\n====== ESTOQUE ======\n");
    for (int i = 0; i < QTD; i++) {
        printf("Codigo: %d | Nome: %s | Preco: R$ %.2f\n",
               estoque[i].codigo, estoque[i].nome, estoque[i].preco);
    }
}


float calcularValorTotal(struct Produto estoque[]) {
    float total = 0;
    for (int i = 0; i < QTD; i++) {
        total += estoque[i].preco;
    }
    return total;
}

int main() {
    struct Produto estoque[QTD];
    int opcao;
    int cadastrado = 0;   

    do {
        printf("\n===== MENU =====\n");
        printf("1. Cadastrar produtos\n");
        printf("2. Listar produtos\n");
        printf("3. Calcular valor total\n");
        printf("4. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProdutos(estoque);
                cadastrado = 1;
                break;
            case 2:
                if (cadastrado) listarProdutos(estoque);
                else printf("Cadastre os produtos primeiro (opcao 1).\n");
                break;
            case 3:
                if (cadastrado) printf("Valor total do estoque: R$ %.2f\n", calcularValorTotal(estoque));
                else printf("Cadastre os produtos primeiro (opcao 1).\n");
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);

    return 0;
}

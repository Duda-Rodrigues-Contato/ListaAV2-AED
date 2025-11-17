// Hash com colisão por lista encadeada, buscar 22: Inserir 12, 22, 32, 42

#include <stdio.h>

#define TAM 10
typedef struct No {

    int chave;
    struct No *prox;

} No;

No* tabelaHash[TAM];
// Inicializa tabela hash
void inicializarTabela() {

    for (int i = 0; i < TAM; i++)
    tabelaHash[i] = NULL;

}


// Função hash
int hash(int chave) {

    return chave % TAM;

}


/* Inserção com tratamento de colisões por
encadeamento */
void inserir(int chave) {

    int indice = hash(chave);
    No* novo = (No*)malloc(sizeof(No));
    
    novo->chave = chave;
    novo->prox = tabelaHash[indice];

    tabelaHash[indice] = novo;

}


// Busca elemento na tabela hash
No* buscar(int chave) {

    int indice = hash(chave);
    No* atual = tabelaHash[indice];

    while (atual != NULL) {

        if (atual->chave == chave)
            
            return atual;
        
        atual = atual->prox;
    }
    
    return NULL;

}


// Impressão da tabela hash
void imprimirTabela() {

    for (int i = 0; i < TAM; i++) {

        printf("[%d]: ", i);

        No* atual = tabelaHash[i];

        while (atual) {

            printf("%d -> ", atual->chave);
            atual = atual->prox;

        }

        printf("NULL\n");

    }

}


int main() {

    //12, 22, 32, 42
    inicializarTabela();
    inserir(12); 
    inserir(22); 
    inserir(32); 
    inserir(42);

    imprimirTabela();

    int chaveBusca = 22;
    No* resultado = buscar(chaveBusca);

    if (resultado)

        printf("Elemento %d encontrado na tabela hash.\n", resultado->chave);

    else

        printf("Elemento nao encontrado na tabela hash.\n");

    return 0;

}
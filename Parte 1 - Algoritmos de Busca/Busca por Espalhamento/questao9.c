// Hash com sondagem linear, buscar 37: Inserir 17, 27, 37, 47, 57

#include <stdio.h>

#define TAM 10
#define VAZIO -1
#define REMOVIDO -2

int tabelaHash[TAM];

// Inicializa a tabela
void inicializarTabela() {

    for (int i = 0; i < TAM; i++)
        tabelaHash[i] = VAZIO;
    
}


// Função hash simples
int hash(int chave) {

    return chave % TAM;

}


// Inserção com sondagem linear
int inserir(int chave) {

    int indice = hash(chave);
    
    for (int i = 0; i < TAM; i++) {

        int tentativa = (indice + i) % TAM;
        
        if (tabelaHash[tentativa] == VAZIO || tabelaHash[tentativa] == REMOVIDO) {

            tabelaHash[tentativa] = chave;
            return tentativa; // inserido com sucesso
        
        }
    }

    return -1; // tabela cheia

}


// Busca com sondagem linear
int buscar(int chave) {

    int indice = hash(chave);

    for (int i = 0; i < TAM; i++) {

        int tentativa = (indice + i) % TAM;

        if (tabelaHash[tentativa] == VAZIO)

            return -1; // não encontrado (posição vazia indica que nunca foi inserido)

        if (tabelaHash[tentativa] == chave)

            return tentativa; // encontrado!
    
    }

    return -1; // não encontrado após percorrer toda a tabela

}


void imprimirTabela() {

    printf("Tabela Hash:\n");
 
    for (int i = 0; i < TAM; i++) {

        printf("[%d]", i);
       
        if (tabelaHash[i] == VAZIO)

            printf(" VAZIO\n");
        
        else if (tabelaHash[i] == REMOVIDO)

            printf("REMOVIDO\n");
        
        else

            printf(" %d\n", tabelaHash[i]);

    }

}


int main() {

    // buscar 37: Inserir 17, 27, 37, 47, 57
    inicializarTabela();

    inserir(17);
    inserir(27);
    inserir(37); 
    inserir(47);
    inserir(57); 
    
    imprimirTabela();

    int busca = 37;
    int pos = buscar(busca);

    if (pos != -1)

        printf("\nElemento %d encontrado na posicao: %d\n", busca, pos);
    
    else

        printf("Elemento %d nao encontrado\n", busca);

    imprimirTabela();

    return 0;

}
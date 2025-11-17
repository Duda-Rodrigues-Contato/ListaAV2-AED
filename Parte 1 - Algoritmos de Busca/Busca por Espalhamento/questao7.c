// Hash sem colisão com módulo 10: {15, 25, 35, 45, 55}

#include <stdio.h>

#define TAM 10
int tabelaHash[TAM];

// Função hash simples:
int hash(int chave) {
    
    return chave % TAM;

}


// Inserir elemento
void inserir(int chave) {

    int indiceInicial = hash(chave);
    int indice = indiceInicial;

    while (tabelaHash[indice] != -1) {

        indice = (indice + 1) % TAM;

        if (indice == indiceInicial) {

            printf("Tabela Hash está lotada!\n");
            return;

        } 
        
    }

    tabelaHash[indice] = chave;

}


// Buscar elemento
int buscar(int chave) {

    int indiceInicial = hash(chave);
    int indice = indiceInicial;

    while (tabelaHash[indice] != -1) {
        
        if (tabelaHash[indice] == chave)
    
            return indice; // encontrado
        
        indice = (indice + 1) % TAM;

        if (indice == indiceInicial) 

            return -1;
    }
    
    return -1; // não encontrado

}


int main() {

    // Inicializar tabela com -1
    for (int i = 0; i < TAM; i++)
        tabelaHash[i] = -1;

    inserir(15);
    inserir(25);
    inserir(35);
    inserir(45);
    inserir(55);

    inserir(10);

    int valor = 10;
    int pos = buscar(valor);
    
    if (pos != -1)

        printf("Valor: %d encontrado na posicao hash: %d.\n", valor, pos);

    else

        printf("Valor nao encontrado na tabela hash.\n");

    return 0;

}
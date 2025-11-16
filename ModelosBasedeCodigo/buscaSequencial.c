// Modelo de Busca Sequencial:

#include <stdio.h>

int buscaSequencial(int vetor[], int tamanho, int valor) {

    for (int i = 0; i < tamanho; i++) {

        if (vetor[i] == valor)
        return i; // retorna índice se encontrado
    
    }

    return -1; // não encontrado

}


int main() {

    int vetor[] = {4, 8, 15, 16, 23, 42};
    int valor = 15;
    int pos = buscaSequencial(vetor, 6, valor);

    if (pos != -1)

        printf("Valor: %d encontrado na posicao: %d.\n", valor, pos);
    
    else
       
        printf("Valor nao encontrado.\n");

    return 0;

}
// Busque o número 55 e retorne o índice ou -1: {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}

#include <stdio.h>

int buscaSequencial(int vetor[], int tamanho, int valor) {

    for (int i = 0; i < tamanho; i++) {

        if (vetor[i] == valor)
        return i; // retorna índice se encontrado
    
    }

    return -1; // não encontrado

}


int main() {

    int vetor[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int valor = 55;
    int pos = buscaSequencial(vetor, 10, valor);

    if (pos != -1)

        printf("Valor: %d encontrado na posicao: %d.\n", valor, pos);
    
    else
       
        printf("Valor nao encontrado.\n");

    return 0;

}
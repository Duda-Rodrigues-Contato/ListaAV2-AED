// Encontre o número 25 no vetor: {15, 8, 25, 7, 12, 18, 5, 9, 30, 3}

#include <stdio.h>

int buscaSequencial(int vetor[], int tamanho, int valor) {

    for (int i = 0; i < tamanho; i++) {

        if (vetor[i] == valor)
        return i; 
    
    }

    return -1;

}


int main() {

    int vetor[] = {15, 8, 25, 7, 12, 18, 5, 9, 30, 3};
    int valor = 25;
    int pos = buscaSequencial(vetor, 10, valor);

    if (pos != -1)

        printf("Valor: %d encontrado na posicao: %d.\n", valor, pos);
    
    else
       
        printf("Valor nao encontrado.\n");
        
    return 0;

}
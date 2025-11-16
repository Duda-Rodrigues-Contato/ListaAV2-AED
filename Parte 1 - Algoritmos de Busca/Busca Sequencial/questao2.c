// Conte quantas vezes o número 7 aparece no vetor: {7, 3, 5, 7, 9, 2, 7, 1, 4, 6}

#include <stdio.h>

int buscaSequencial(int vetor[], int tamanho, int valor) {

    int cont = 0;

    for (int i = 0; i < tamanho; i++) {

        if (vetor[i] == valor)
            
            cont++;

    }

    if (cont > 0)

        return cont;

    else
    
        return -1; // não encontrado

}


int main() {

    int vetor[] = {7, 3, 5, 7, 9, 2, 7, 1, 4, 6};
    int valor = 7;
    int pos = buscaSequencial(vetor, 10, valor);

    if (pos != -1)

        printf("Valor %d encontrado %d vezes.\n", valor, pos);
    
    else
       
        printf("Valor nao encontrado.\n");

    return 0;

}
// Retorne a posição de inserção do 27: {5, 10, 15, ..., 50}

#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor) {

    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {

        meio = (inicio + fim) / 2;

        if (vetor[meio] == valor)
    
            return meio; // valor encontrado
        
        else if (vetor[meio] < valor)

            inicio = meio + 1; // busca na metade superior
        
        else

            fim = meio - 1; // busca na metade inferior
    
    }
    
    return -1; // não encontrado

}


int main() {

    int vetor[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int valor = 27;
    int pos = buscaBinaria(vetor, 10, valor);

    if (pos != -1)

        printf("Valor: %d encontrado na posicao: %d.\n", valor, pos);
    
    else

        printf("Valor nao encontrado.\n");

    return 0;

}
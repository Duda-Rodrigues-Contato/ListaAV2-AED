// Conte quantas comparações para encontrar 100: {10, 20, ..., 100}

#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor) {

    int inicio = 0, fim = tamanho - 1, meio;
    int cont = 0;

    while (inicio <= fim) {

        meio = (inicio + fim) / 2;

        if (vetor[meio] == valor)
    
            return cont++;
        
        else if (vetor[meio] < valor) {

            inicio = meio + 1; // busca na metade superior
            cont++;

        } else {

            fim = meio - 1; // busca na metade inferior
            cont++;

        }

    }
    
    if (cont > 0)

        return cont;
    
    else
        
        return -1; // não encontrado

}


int main() {

    int vetor[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int valor = 100;
    int pos = buscaBinaria(vetor, 10, valor);

    if (pos != -1)

        printf("Um total de %d comparacoes para encontrar o valor %d.\n", pos, valor);
    
    else

        printf("Valor nao encontrado.\n");

    return 0;

}

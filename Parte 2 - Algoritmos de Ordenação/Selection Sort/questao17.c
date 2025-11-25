// Conte trocas: {5, 4, 3, 2, 1, 6, 7, 8, 9, 10}

#include <stdio.h>

void selectionSort(int arr[], int n) {

    int cont = 0;

    for (int i = 0; i < n - 1; i++) {

        int min_idx = i;

        for (int j = i + 1; j < n; j++) {

            if (arr[j] < arr[min_idx])
            min_idx = j;

        }

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        cont++;

    }

    printf("Total de trocas: %d\n", cont);

}


int main() {

    int arr[] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
    int tam = 10;

    selectionSort(arr, tam);

    printf("Array ordenado: \n");

    for(int i = 0; i < tam; i++)

        printf("%d ", arr[i]);

    return 0;

}
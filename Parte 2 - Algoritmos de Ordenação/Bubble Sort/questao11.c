// Pare se já estiver ordenado: {1, 2, ..., 10}

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    
    int x = 0;

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                x++;
                printf("X eh: %d", x);
                
            }

        }
        x++;

        printf("Array apos troca %d: ", x);
        for(int k = 0; k < n; k++)
            printf("%d ", arr[k]);

        printf("\n");

    }

    if (x == 9) {

        printf("Array JA ESTAVA ordenado. Parando o algoritmo.\n");

    } else {

        printf("Array NAO estava ordenado.\n");

    }

}


int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int tam = 10;

    bubbleSort(arr, tam);

    printf("Array ordenado: ");

    for(int i = 0; i < tam; i++)
    
        printf("%d ", arr[i]);

    return 0;

}
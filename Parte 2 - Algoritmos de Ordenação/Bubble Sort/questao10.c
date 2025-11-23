// Ordene o vetor: {9, 7, 5, 3, 1, 2, 4, 6, 8, 0}

#include <stdio.h>

void bubbleSort(int arr[], int n) {

    int x = 0;

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }

        }

        x++;
        printf("Array apos troca %d: ", x);
        for(int k = 0; k < n; k++)
            printf("%d ", arr[k]);

        printf("\n");

    }

}


int main() {

    int arr[] = {9, 7, 5, 3, 1, 2, 4, 6, 8, 0};
    int tam = 10;

    bubbleSort(arr, tam);

    printf("Array ordenado: ");

    for(int i = 0; i < tam; i++)
    
        printf("%d ", arr[i]);

    return 0;
    
}
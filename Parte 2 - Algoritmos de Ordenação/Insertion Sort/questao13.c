// Ordene: {22, 11, 99, 88, 9, 7, 42, 65, 33, 10}

#include <stdio.h>

void insertionSort(int arr[], int n) {

    int x = 0;
    
    for (int i = 1; i < n; i++) {

        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];
            j--;

        }

        arr[j + 1] = key;

        x++;
        printf("Array apos troca %d: ", x);
        for(int k = 0; k < n; k++)
            printf("%d ", arr[k]);

        printf("\n");

    }

}


int main() {

    int arr[] = {22, 11, 99, 88, 9, 7, 42, 65, 33, 10};
    int n = 10;

    insertionSort(arr, n);

    printf("Array ordenado: ");

    for(int i = 0; i < n; i++)

        printf("%d ", arr[i]);

    return 0;

}
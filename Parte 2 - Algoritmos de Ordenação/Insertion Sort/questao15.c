// Ordem decrescente: {30, 20, 10, 40, 50, 70, 60, 90, 80, 100}

#include <stdio.h>

void insertionSort(int arr[], int n) {

    for (int i = 1; i < n; i++) {

        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] < key) {

            arr[j + 1] = arr[j];
            j--;

        }

        arr[j + 1] = key;

    }

}


int main() {

    int arr[] = {30, 20, 10, 40, 50, 70, 60, 90, 80, 100};
    int n = 10;

    insertionSort(arr, n);

    printf("Array ordenado: ");

    for(int i = 0; i < n; i++)

        printf("%d ", arr[i]);

    return 0;

}
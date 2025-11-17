// Modelo de Selection Sort:

#include <stdio.h>

void selectionSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        int min_idx = i;

        for (int j = i + 1; j < n; j++) {

            if (arr[j] < arr[min_idx])
            min_idx = j;

        }

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;

    }

}


int main() {

    int arr[] = {64, 25, 12, 22, 11}; 
    int tam = 5;

    selectionSort(arr, tam);

    printf("Array ordenado: ");

    for(int i = 0; i < tam; i++)

        printf("%d ", arr[i]);

    return 0;

}
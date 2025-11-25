// Ordem decrescente: {42, 33, 60, 15, 75, 12, 25, 90, 1, 6}

#include <stdio.h>

void selectionSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        int max_idx = i;
    
        for (int j = i + 1; j < n; j++) {

            if (arr[j] > arr[max_idx])
                max_idx = j;

        }

        if (max_idx != i) {

            int temp = arr[i];
            arr[i] = arr[max_idx];
            arr[max_idx] = temp;

        }

        

    }

}


int main() {

    int arr[] = {42, 33, 60, 15, 75, 12, 25, 90, 1, 6}; 
    int tam = 10;

    selectionSort(arr, tam);

    printf("Array ordenado de forma decrescente: ");

    for(int i = 0; i < tam; i++)

        printf("%d ", arr[i]);

    return 0;

}
// Mostre após cada troca: {29, 10, 14, 37, 13, 40, 2, 7, 5, 18}

#include <stdio.h>

void selectionSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        int min_idx = i;

        for (int j = i + 1; j < n; j++) {

            if (arr[j] < arr[min_idx])
            min_idx = j;

        }

        printf("Troca %d: \n", i+1);
        for (int k = 0; k < n; k++) {
            if (k == min_idx)
                printf("[%d] ", arr[k]);
            else
                printf("%d ", arr[k]);
        }
        printf("\n");

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;

    }

}


int main() {

    int arr[] = {29, 10, 14, 37, 13, 40, 2, 7, 5, 18};
    int tam = 10;

    selectionSort(arr, tam);

    printf("Array ordenado: ");

    for(int i = 0; i < tam; i++)

        printf("%d ", arr[i]);

    return 0;

}
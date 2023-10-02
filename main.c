#include <stdio.h>
#include "funcoes.h"

void mostrarArray(double arr[], int size) {
    // printar o array
    for (int i = 0; i < size; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");
}

int main() {
    double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(arr) / sizeof(arr[0]);

    mostrarArray(arr, size);
    
    function1(arr, size);
    mostrarArray(arr, size);

    function2(arr, size);
    mostrarArray(arr, size);

    function3(arr, size);
    mostrarArray(arr, size);

    return 0;
}
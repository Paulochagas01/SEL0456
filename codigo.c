#include <stdio.h>

void mostrarArray(double arr[], int size) {
    // printar o array
    for (int i = 0; i < size; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");
}

void function1(double arr[], int size) {
    // funcao 1 -> para elevar os termos ao quadrado
    for (int i = 0; i < size; i++) {
        arr[i] *= arr[i];
    }
}

void function2(double arr[], int size) {
    // funcao 2 -> para multiplicar os termos por 2
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

void function3(double arr[], int size) {
    // funcao 3 -> para somar 2 a cada termo
    for (int i = 0; i < size; i++) {
        arr[i] += 2;
    }
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
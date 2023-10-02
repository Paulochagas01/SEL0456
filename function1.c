#include "funcoes.h"

void function1(double arr[], int size) {
    // funcao 1 -> para elevar os termos ao quadrado
    for (int i = 0; i < size; i++) {
        arr[i] *= arr[i];
    }
}
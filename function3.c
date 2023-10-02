#include "funcoes.h"

void function3(double arr[], int size) {
    // funcao 3 -> para somar 2 a cada termo
    for (int i = 0; i < size; i++) {
        arr[i] += 2;
    }
}
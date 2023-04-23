#include <stdio.h>

void swap (int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int a = 10;
    int b = 20;

    printf("a,b = %d, %d\n", a, b);

    swap(&a, &b); // Chama a função swap passando os endereços de memória de 'a' e 'b'

    printf("a,b = %d, %d\n", a, b);
    return 0;
}
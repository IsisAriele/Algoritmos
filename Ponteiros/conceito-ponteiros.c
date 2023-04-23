#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *pa, *pb;
    pa = &a; // Ponteiro pa aponta para endereço de memória da variável a
    pb = &b; // Ponteiro pb aponta para endereço de memória da variável b
    *pa = *pb * 2; // Ponteiro pa é atribuído da multiplicação de 2 pelo valor referenciado em pb (2 * 20).
    // Como pa aponta para o endereço de memória da var a, então o valor deste muda.
    printf("%d,%d\n", a, b);
    return 0;
}
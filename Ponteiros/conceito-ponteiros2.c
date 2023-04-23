#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *ponteiro;
    ponteiro = &b; // Aponta para var b, que tem o valor 20;
    ponteiro = ponteiro + 1; // Altera o endereço de memória, + 1 ao endereço de memória ou x bits a frente; 
    *ponteiro = 50; // Nesse novo endereço de memória, recebe o valor 50.
    printf("a,b,c = %d, %d, %d\n", a, b, c);
    return 0;
}
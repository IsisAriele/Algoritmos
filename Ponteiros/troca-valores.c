#include <stdio.h>

void swap(int *a, int *b) {
    int aux = *a;  // Armazenando o valor apontado por 'a' na variável auxiliar 'aux'
    *a = *b;       // Atribuindo o valor apontado por 'b' para o endereço apontado por 'a'
    *b = aux;      // Atribuindo o valor armazenado em 'aux' para o endereço apontado por 'b'

}

int main() {
    int a = 10;
    int b = 20;

    printf("a, b = %d, %d\n", a, b);

    swap(&a, &b);

    printf("a, b = %d, %d\n", a, b);
    
    return 0;
}
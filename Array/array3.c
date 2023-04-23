#include <stdio.h>

void read_vector(int a[], int n) { 
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]); 
}

int index_of(int a[], int n) {
    int menor = a[0]; //inicializ menor como o primeiro elemento
    int index = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] < menor) {
            menor = a[i]; // Atualiza o valor do menor
            index = i;
        }
    }
    return index;
}

int main() {
    int n;
    scanf("%d", &n); // Lê o valor de n
    int a[n];

    read_vector(a, n);
    int index = index_of(a, n);
    printf("O índice do menor elemento do array é: %d\n", index);

    return 0;
}

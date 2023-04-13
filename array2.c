#include <stdio.h>

void read_vector(int a[], int n) { 
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]); 
}

int menorx(int a[], int n) {
    int menor = a[0]; //inicializ menor como o primeiro elemento
    for (int i = 1; i < n; ++i) {
        if (a[i] < menor) {
            menor = a[i]; // Atualiza o valor do menor
        }
    }
    return menor;
}

int main() {
    int n;
    scanf("%d", &n); // Lê o valor de n
    int a[n];

    read_vector(a, n);
    int menor = menorx(a, n);
    printf("O menor elemento do array é: %d\n", menor);

    return 0;
}


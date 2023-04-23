#include <stdio.h>
void read_vector(int a[], int n) {
    for (int i = 0; i < n; ++i){
        scanf("%d", &a[i]); // Incremento de um valor inteiro no array
    }
}

int positivos(int a[], int n) {
    int posit = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) { //Não considerando 0 positivo
            posit += 1;
        }
    }

    return posit;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    read_vector(a, n);

    int quantidade_positivos = positivos(a, n);
    printf("A quantidade de números positivos no array é: %d\n", quantidade_positivos);
}
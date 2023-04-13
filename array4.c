#include <stdio.h>

void read_vector(int a[], int n) { 
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]); 
}

int par(int a[], int n) {
    int par = 0; 
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            par += a[i];
        }
    }
    return par;
}

int main() {
    int n;
    scanf("%d", &n); // Lê o valor de n
    int a[n];

    read_vector(a, n);
    int soma_par = par(a, n);
    printf("A soma dos elementos pares do array é: %d\n", soma_par);

    return 0;
}

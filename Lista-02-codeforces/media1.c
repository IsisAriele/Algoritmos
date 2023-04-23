#include <stdio.h>

void read_vector(int a[], int n) { 
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]); 
}

double media(int a[], int n) {
    double soma = 0;
    for (int i = 0; i <n; ++i) {
        soma += a[i];
    }
    double media = soma / n;
    return media;
}

int abaixo (int a[], int n, double media) {
    int abaixo = 0;
    for (int i = 0; i <n; ++i) {
        if (a[i] < media) {
            abaixo += 1;
        }
    }
    return abaixo;
}

int acima (int a[], int n, double media) {
    int acima = 0;
    for (int i = 0; i <n; ++i) {
        if (a[i] >= media) {
            acima += 1;
        }
    }
    return acima;
}

int main() {
    int n;
    scanf("%d", &n); // Lê o valor de n
    int a[n];
    read_vector(a, n);

    double valor_media = media(a, n);

    printf("%.1lf\n", valor_media);
    printf("%d\n", abaixo(a, n, valor_media));
    printf("%d\n", acima(a, n, valor_media));
    return 0;
}

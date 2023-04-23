#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n); // Lê o valor de n
    int a[n]; // Cria um array de tamanho n
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]); // Lê os elementos do array a
    }

    double soma = 0; // Variável para armazenar a soma dos elementos do array
    for (i = 0; i < n; ++i){
        soma += a[i]; // Calcula a soma dos elementos do array a
    }
   
    double media = soma / n; // Calcula a média dos elementos do array, convertendo n para double para garantir precisão na divisão

    int abaixo = 0, acima = 0, ab[n], ac[n]; // Variáveis para contar quantos elementos estão abaixo e acima da média, e para armazenar os elementos abaixo e acima da média em arrays ab e ac

    for (i = 0; i < n; ++i) {
        if (a[i] < media)
            ab[abaixo++] = a[i]; // Se o elemento for menor que a média, armazena no array ab e incrementa a variável abaixo
        else {
            ac[acima] = a[i]; // Senão, armazena o elemento no array ac
            acima++;
        }
    }

    printf("%.1lf\n", media); // Imprime a média com uma casa decimal
    printf("%d", abaixo); // Imprime a quantidade de elementos abaixo da média
    for (i = 0; i < abaixo; ++i)
        printf(" %d", ab[i]); // Imprime os elementos abaixo da média
    printf("\n");
    printf("%d", acima); // Imprime a quantidade de elementos acima da média
    for (i = 0; i < acima; ++i)
        printf(" %d", ac[i]); // Imprime os elementos acima da média
    printf("\n");
    return 0;
}
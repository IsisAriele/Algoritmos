#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n); 
    int a[n]; 
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]); 
    }

    double soma = 0;
    for (i = 0; i < n; ++i){
        soma += a[i];
    }
   
    double media = soma / n; 

    int abaixo = 0, acima = 0, ab[n], ac[n]; 

    for (i = 0; i < n; ++i) {
        if (a[i] < media)
            ab[abaixo++] = a[i]; 
        else {
            ac[acima] = a[i];
            acima++;
        }
    }

    printf("%.1lf\n", media); 
    printf("%d", abaixo); 
    for (i = 0; i < abaixo; ++i)
        printf(" %d", ab[i]); 
    printf("\n");
    printf("%d", acima); 
    for (i = 0; i < acima; ++i)
        printf(" %d", ac[i]); 
    printf("\n");
    return 0;
}
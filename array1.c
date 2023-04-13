#include <stdio.h>

void read_vector(int a[], int n) { //Void não retorna nenhum valor; possui dois parâmetros de entrada, que serão chamados no decorrer do código e só n receberá um valor lido fixo pelo usário.
    int i;
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]); 
}

int index_of(int a[], int n, int x){
    for (int i = 0; i < n; i++) {
        if (a[i] == x) { // Compara cada elemento do vetor com o valor x
            return i; // Retorna o índice quando o valor é encontrado
        }
    }
    return -1; // Retorna -1 se o valor x não for encontrado no vetor
}

int main(){
    int n,x;
    scanf("%d %d", &n, &x);
    int a[n]; //Declaração de uma lista a que receberá n elementos
    read_vector(a, n);
    int index = index_of(a, n, x);
    printf("index of %d is %d.\n", x, index);
    return 0;
}

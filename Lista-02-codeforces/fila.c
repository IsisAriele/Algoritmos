#include <stdio.h>

int main() {
    int n, s;
    scanf("%d", &n);
    int pessoas_na_fila[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &pessoas_na_fila[i]);
    }

    scanf("%d", &s);
    int pessoas_que_sairam[s];

    for (int i = 0; i < s; i++) {
        scanf("%d", &pessoas_que_sairam[i]);
    }

    int pessoas_que_ficaram[n - s];
    int posicao_na_fila_dos_que_ficaram = 0;

    for (int i = 0; i < n; i++){
        int ficou = 1;
        for (int j = 0; j < s; j++) {
            if (pessoas_na_fila[i] == pessoas_que_sairam[j]) {
                ficou = 0;
                break;
            }
        }

        if (ficou) {
            pessoas_que_ficaram[posicao_na_fila_dos_que_ficaram] = pessoas_na_fila[i];
            posicao_na_fila_dos_que_ficaram++;
        }
    }
    for (int i = 0; i < n-s; i++) {
        if(i == n - s - 1) {
            printf("%d", pessoas_que_ficaram[i]);
        } else{
             printf("%d ", pessoas_que_ficaram[i]);
        } 
    }

}
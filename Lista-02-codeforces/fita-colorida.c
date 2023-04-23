#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int numero_de_quadrados_fita[n], numero_de_fitas_coloridas[n], numero_tom_direita[n], numero_tom_esquerda[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &numero_de_quadrados_fita[i]);
    }

    // Para direita....
    for (i = 0; i < n; i++){
        if (numero_de_quadrados_fita[i] == 0) {
            numero_tom_direita[i] = 0;
        } else {
            int contador = 0;
            int encontrou = 0;
            for (int j = i; j <= n - 1; j++) {
                if (numero_de_quadrados_fita[j] == 0) {
                    encontrou = 1;
                    break;
                }
                contador++;
            }
            if (contador > 9) {
                contador = 9;
            }

            if (encontrou) {
                numero_tom_direita[i] = contador;
            } else {
                numero_tom_direita[i] = 9;
            }
        }
    }

    // Para esquerda....
    for (i = n - 1; i > 0; i--){
        if (numero_de_quadrados_fita[i] == 0) {
            numero_tom_esquerda[i] = 0;
        } else {
            int contador = 0;
            int encontrou = 0;
            for (int j = i; j >= 0; j--) {
                if (numero_de_quadrados_fita[j] == 0) {
                    encontrou = 1;
                    break;
                }
                contador++;
            }

            if (contador > 9) {
                contador = 9;
            }

            if (encontrou) {
                numero_tom_esquerda[i] = contador;
            } else {
                numero_tom_esquerda[i] = 9;
            }
        }
    }
    int array[n];
    for(int i = 0; i < n; i++) {
        if (i == 0) {
            array[i] = numero_tom_direita[0];
        } else if (i == n - 1) {
            array[i] = numero_tom_esquerda[n-1];
        } else if (numero_tom_esquerda[i] < numero_tom_direita[i]) {
            array[i] = numero_tom_esquerda[i];
        } else {
            array[i] = numero_tom_direita[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d", array[i]);
        } else {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
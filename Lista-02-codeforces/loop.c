#include<stdio.h>

void calcula_magnitude(int n) {
    int magnitudes[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &magnitudes[i]);
    }

    int primeira_magnitude = magnitudes[0];
    int ultima_magnitude = magnitudes[n - 1];


    int contagem_de_picos = 0;

    for (int j = 0; j < n; j++){
        int atual, proximo, anterior;

        if (!(j == 0) && !(j==n-1)) {
            atual = magnitudes[j];
            proximo = magnitudes[j + 1];
            anterior = magnitudes[j - 1];
            if ((proximo < atual && anterior < atual) || (proximo > atual && anterior > atual)) {
                contagem_de_picos ++;
            }
        }
        else if (j == 0) {
            atual = magnitudes[j];
            proximo = magnitudes[j + 1];
            anterior = magnitudes[n - 1];
            if ((proximo < atual && anterior < atual) || (proximo > atual && anterior > atual)) {
                contagem_de_picos ++;
            }
        }
        else {
            atual = magnitudes[j];
            proximo = magnitudes[0];
            anterior = magnitudes[j - 1];
            if ((proximo < atual && anterior < atual) || (proximo > atual && anterior > atual)) {
                contagem_de_picos ++;
            }
        }
    
    }
    printf("%d\n", contagem_de_picos);
}

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        calcula_magnitude(n);
    } 
    return 0;
}
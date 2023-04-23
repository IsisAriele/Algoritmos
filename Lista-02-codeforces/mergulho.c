#include <stdio.h>

int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    int voltaram[r];
    int nao_voltaram[n - r];

    for (int i = 0; i < r; i++) {
        scanf("%d", &voltaram[i]);
    }

    if (n - r == 0) {
        printf("*\n");
        return 0;
    }

    int nao_voltou_indice = 0;
    // Mergulhadores 0 até n (quantidade total de mergulhadores)
    for (int m = 1; m <= n; m++) {
        int voltou = 0;
        // Mergulhadores que não voltaram 0 até r
        for (int v = 0; v < r; v++) {
            if (voltaram[v] == m) {
                voltou = 1;
                break;
            }
        }

        if (voltou == 0) {
            nao_voltaram[nao_voltou_indice] = m;
            nao_voltou_indice++;
        }
    }

    for (int p = 0; p < (n - r ); p++){
        printf("%d ", nao_voltaram[p]);
    }
    return 0;
}
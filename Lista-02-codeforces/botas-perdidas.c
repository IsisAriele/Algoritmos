#include <stdio.h>

struct sapatos {
    int tamanho;
    char lado;
};

int main() {
    int input;
    while(scanf("%d", &input) != EOF) {
        int count_pares = 0;
        struct sapatos quantidade_de_sapatos[input]; //definição de um array de sapatos com quantidade definida por input

        for(int i = 0; i < input; i ++) {
            scanf("%d %c", &quantidade_de_sapatos[i].tamanho, &quantidade_de_sapatos[i].lado); // o indice 0 da array é atribuido com os valores lidos de tamanho e lado, e assim sucessivamente até quantidade definida por input;
        }

        for(int i = 0; i < input; i ++) {
            for (int j = i + 1; j < input; j++) {
                if (quantidade_de_sapatos[i].tamanho == quantidade_de_sapatos[j].tamanho) {
                    if (quantidade_de_sapatos[i].lado != quantidade_de_sapatos[j].lado) {
                        count_pares++;
                    }
                }
            }
        }
        printf("%d\n", count_pares);
    }
    return 0;
}
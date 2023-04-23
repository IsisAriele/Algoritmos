#include <stdio.h>

void vencedor() {
    int i, j, jogadores, rodadas;
    scanf("%d %d", &jogadores, &rodadas);

    int jogadas[jogadores*rodadas];
    for (i = 0; i < rodadas; ++i)
        for (j = 0; j < jogadores; ++j) {
            scanf("%d", &jogadas[i * jogadores+j]);
        }

    int pontuacao[jogadores];
    for (i = 0; i < jogadores; ++i) pontuacao[i]=0;
    for (i = 0; i < rodadas; ++i) {
        for (j = 0; j < jogadores; ++j) {
            pontuacao[j] += jogadas[i*jogadores+j];
        }
    }
    int ans = 0;
    for (i = 1; i < jogadores; ++i) {
        if (pontuacao[i]>= pontuacao[ans]){
            ans = i;
        }   
    }
    printf("%d\n", ans+1);
}

int main() {
    vencedor();
    return 0;
}
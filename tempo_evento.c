#include <stdio.h>

int main() {
    int a; 
    int b; 
    scanf("%d", &a);
    scanf("%d", &b);

    int duracao = b - a;
    int tempoHoras = duracao / 60;
    int tempoMinutos = duracao % 60;
    printf("%02d:%02d", tempoHoras, tempoMinutos);
    return 0;
}
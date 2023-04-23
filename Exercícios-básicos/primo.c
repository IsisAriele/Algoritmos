#include <stdio.h>
#include <stdbool.h>

bool primo(int a) {
    if (a == 1) {
        return false;
    }
    int b = a - 1;
    while (a % b != 0) {
        b = b - 1;
    }
    return b == 1;
}

int main() {
    int n;
    scanf("%d", &n);

    if (primo(n)) {
        printf("Sim");
    } else {
        printf("Nao");
    }

    return 0;
}
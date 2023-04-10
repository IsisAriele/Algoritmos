#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    
    int resto = 1;
    while (resto != 0) {
        resto = a % b;
        a = b;
        b = resto;

    }
    printf("%d", a);
    
    return 0;
}
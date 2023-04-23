#include <stdio.h>

int main() {
    long long l1, l2;
    scanf("%lld %lld", &l1, &l2);

    long long perimetro = (l1 * 2) + (l2 * 2);
    printf("%lld", perimetro);
    return 0;
}
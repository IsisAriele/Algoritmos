
#include <stdio.h>

int main() {
    long long av11, av21, av12, av22, p1, p2;
    scanf("%lld %lld", &av11, &av21);
    scanf("%lld %lld", &av12, &av22);
    scanf("%lld %lld", &p1, &p2);

    long long avaliacao1 = ((av11 * p1) + (av21 * p2)) / (p1 + p2);
    long long avaliacao2 = ((av12 * p1) + (av22 * p2)) / (p1 + p2);

    if (avaliacao1 >= avaliacao2) {
        printf("1");
    } else {
        printf("2");
    }

    return 0;
}
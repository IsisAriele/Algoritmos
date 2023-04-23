#include <stdio.h>

int main() {
    float x; 
    float y; 
    scanf("%d %d", &x, &y);

    float media = (x + y) / 2;
    printf("%.5f\n", media);
    return 0;
}
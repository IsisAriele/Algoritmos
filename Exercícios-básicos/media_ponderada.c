#include <stdio.h>

int main() {
    int x; 
    int y; 
    scanf("%d %d", &x, &y);

    int media = ((x * 2) + (y * 3)) / 5;
    printf("%d", media);
    return 0;
}
#include<stdio.h>

int multiplication(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    printf("Entrez deux entiers: ");
    scanf("%d %d", &x, &y);
    printf("La multiplication de %d et %d est %d\n", x, y, multiplication(x, y));
    return 0;
}
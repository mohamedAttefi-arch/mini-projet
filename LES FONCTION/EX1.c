#include<stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Entrez deux entiers: ");
    scanf("%d %d", &x, &y);
    printf("La somme de %d et %d est %d\n", x, y, somme(x, y));
    return 0;
}
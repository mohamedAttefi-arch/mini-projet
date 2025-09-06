#include<stdio.h>

int fact(int a)
{
    int f = 1;
    for(int i = f; i <= a; i++)
        {
            f = f * i;
        }
        return f;
    
}

int main()
{
    int a;
    printf("Enter a numbers: ");
    scanf("%d", &a);
    printf("The factoriel of the number is: %d\n", fact(a));
    return 0;
}
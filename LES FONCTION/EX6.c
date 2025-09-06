#include<stdio.h>

int fibonacci(int n)
{
    int a = 0, b = 1, c = 0;
    printf("entre the number of the terme: ");
    scanf("%d",&n);
    printf("the %d terme of fibonacci is; ", n);
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
    


}

int main()
{
    int n;
    printf("%d", fibonacci(n));

    return 0;
}
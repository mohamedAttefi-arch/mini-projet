#include <stdio.h>

int la_parité(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int n;
    la_parité(n);
    do{
    
    printf("\nentrez un nombre: ");
    scanf("%d", &n);

    if (la_parité(n))
    {
        printf("le nombre est paire");
    }
    else
    {
        printf("le nombre est impaire");
    }
    }while (la_parité(n) == 0);
    
   
    
}
#include<stdio.h>

void reverse(char T[])
{
    int i = 0;
    int temp;
    while (T[i] != '\0')
    {
        i++;
    }

    int longeur = i;

    for ( i = 0; i < longeur /2; i++)
    {
        temp = T[i];
        T[i] = T[longeur - 1 - i];
        T[longeur - 1 - i] = temp;
    }

    
    
}

int main()
{
    char T[100];
    printf("entrez une chaine de chracter: ");
    scanf(" %[^\n]", T);
    reverse(T);
    printf("inverse: %s",T);
}
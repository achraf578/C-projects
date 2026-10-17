#include <stdio.h>

int main(void)
{
    int num;
    printf("Entrer un entier: ");
    scanf("%d", &num);
    if (num>=56 && num<=78)
    {
        printf("GAGNE\n");
    }
    else
    {
        printf("PERDU\n");
    }
}
#include <stdio.h>

int main(void)
{
    int numbers[10];
    int result=0;
    for (int i=0; i<10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }
    for (int i=0; i<10; i++)
    {
        result+=numbers[i];
    }
    printf("%d\n", result);
    return 0;
}
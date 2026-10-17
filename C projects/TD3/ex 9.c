#include <stdio.h>

int main(void)
{
    int i;
    int numbers[10];
    int ref;
    for (int i=0; i<10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }
    ref=numbers[0];
    for (int i=0; i<10; i++)
    {
        if (ref>numbers[i])
        {
            ref=numbers[i];
        }
    }
    printf("%d\n", ref);
    return 0;
}

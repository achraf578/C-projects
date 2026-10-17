#include <stdio.h>

int main(void)
{
    int i=3;
    double sum=1/i;
    while (i<100)
    {
        sum=sum+(1/(i+2));
    }
    printf("%.2f\n", sum);
    return 0;
}
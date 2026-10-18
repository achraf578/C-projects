#include <stdio.h>

int main(void)
{
    double i=3;
    double sum1=0;
    int sum2=0;
    int x=5;
    while (i<100)
    {
        sum1+=(1/i);
        i+=2;
    }
    do
    {
        sum2+=x;
        x*=2;
    }
    while(x<641);
    printf("%.2f\n%d\n", sum1, sum2);
    return 0;
}
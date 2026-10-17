#include <stdio.h>

int main(void)
{
    double h;
    double b;
    double s;
    printf("enter the height: ");
    scanf("%lf", &h);
    printf("enter the base: ");
    scanf("%lf", &b);
    s=(h*b)/2;
    printf("the surface is: %.2f\n", s);
    return 0;
}
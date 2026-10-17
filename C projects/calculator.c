#include <stdio.h>

int main(void)
{
    double num1;
    double num2;
    double result;
    char op;

    printf("Enter 1st number: ");
    scanf("%lf", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter the 2nd number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        result=num1+num2;
        printf("Result: %.2f\n", result);
    }
    else if (op == '-')
    {
        result=num1-num2;
        printf("Result: %.2f\n", result);
    }
    else if (op == '*')
    {
        result=num1*num2;
        printf("Result: %.2f\n", result);
    }
    else if (op == '/')
    {
        if (num2!=0)
        {
            result=num1/num2;
            printf("Result: %.2f\n", result);
        }
        else
        {
            printf("Error: Division by 0!\n");
            result=num1;
            printf("Result: %.2f\n", result);
        }
    }
    else
    {
        printf("Invalid operator\n");
        result=num1;
        printf("Result: %.2f\n", result);
    }

    while (1)
    {
        printf("Enter operator: ");
        scanf(" %c", &op);
        if (op!='=')
        {
            printf("Enter number: ");
            scanf("%lf", &num2);
            if (op=='+')
            {
                result=result+num2;
                printf("Result: %.2f\n", result);
            }
            else if (op=='-')
            {
                result=result-num2;
                printf("Result: %.2f\n", result);
            }
            else if (op=='*')
            {
                result=result*num2;
                printf("Result: %.2f\n", result);
            }
            else if (op=='/')
            {
                if(num2!=0)
                {
                    result=result/num2;
                    printf("Result: %.2f\n", result);
                }
                else
                {
                    printf("Error: Division by 0!\n");
                }
            }
            else
            {
                printf("Invalid operator!\n");
            }
        }
        else
        {
            printf("Result %.2f\n", result);
            printf("Hope to see you soon.\n");
            break;
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    float num1, num2, result;
    char op;

    scanf("%f", &num1);
    scanf(" %c", &op);
    scanf("%f", &num2);

    switch (op)
    {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2f", result);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Cannot divide by zero");
            }
            else
            {
                result = num1 / num2;
                printf("Result: %.2f", result);
            }
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
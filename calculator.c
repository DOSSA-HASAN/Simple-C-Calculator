#include <stdio.h>

//create functions for different operations

float addition(float num1, float num2)
{
    return num1 + num2;
}

float subtract(float num1, float num2)
{
    return num1 - num2;
}

float multiply(float num1, float num2)
{
    return num1 * num2;
}

float divide(float num1, float num2)
{
    if(num2 != 0)
    {
        return num1 / num2;
    }
    else
    {
        printf("\nCan not do zero division!");
        return 0.0;
    }

}

void clearInputBuffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF) {}
}


int main()
{
    float num1, num2, result;
    char operator;

    printf("Please enter the first number: ");
    scanf("%f", &num1);

    printf("Please enter the second number: ");
    scanf("%f", &num2);

    clearInputBuffer();

    printf("Please enter the operator +, -, *, /.: ");
    scanf("%c", &operator);

    switch(operator)
    {
    case '+':
        result = addition(num1, num2);
        break;

    case '-':
        result = subtract(num1, num2);
        break;

    case '*':
        result = multiply(num1, num2);
        break;

    case '/':
        result = divide(num1, num2);
        break;

    default:
        printf("\n%c is not a valid operator", operator);
        return -1;
    }


    printf("\nThe result of %.2f %c %.2f = %.2f", num1, operator, num2, result);

    return 0;
}

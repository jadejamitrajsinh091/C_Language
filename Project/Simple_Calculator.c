#include <stdio.h>

int main()
{
    printf("Welcome to The Simple Calculator!\n");

    int number1, number2;

    char operator;

    printf("Enter First Number:\n");
    scanf("%d", &number1);

    printf("Enter Second Number:\n");
    scanf("%d", &number2);

    printf("Enter Operation You Want To Perform (+, -, *, /):\n");
    scanf(" %c", &operator);

    switch (operator)
    {

    case '+':
        printf("Result: %d\n", number1 + number2);
        break;

    case '-':
        printf("Result: %d\n", number1 - number2);
        break;

    case '*':
        printf("Result: %d\n", number1 * number2);
        break;

    case '/':
        printf("Result: %d\n", number1 / number2);
        break;

    default:
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
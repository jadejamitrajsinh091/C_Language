#include <stdio.h>

int main()
{
    printf("Welcome to The Grade Calculation Checker!\n");

    int mark;

    printf("Enter your mark:\n");
    scanf("%d", &mark);

    if (mark >= 90)
    {
        printf("Congratulation You Acheived A Grade");
    }
    else if (mark >= 80)
    {
        printf("Congratulation You Acheived B Grade");
    }
    else if (mark >= 70)
    {
        printf("You Acheived C Grade");
    }
    else if (mark >= 60)
    {
        printf("You Acheived D Grade");
    }
    else if (mark >= 33)
    {
        printf("You Acheived E Grade");
    }
    else
    {
        printf("Opps! You Are Failed");
    }

    return 0;
}
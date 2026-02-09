#include <stdio.h>

int main()
{
	printf("Welcome To Triangle Finder!\n");
	
	float first,second,third;
	
	printf("Enter First Angle:\n");
	scanf("%f",&first);
	
	printf("Enter Second Angle:\n");
	scanf("%f",&second);
	
	third = 180-(first + second);
	
	printf("Third Angle Is:- %.2f\n",third);
	
	return 0;
}
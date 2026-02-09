#include <stdio.h>

int main()
{
	float base,hra,da,ta,Gross;
	
	printf("Welcome To Gross Salary Calculator!\n");
	
	printf("Enter Your Base Salary:\n");
	scanf("%f",&base);
	
	printf("Enter Your Base HRA:\n");
	scanf("%f",&hra);
	
	printf("Enter Your Base DA:\n");
	scanf("%f",&da);
	
	printf("Enter Your Base TA:\n");
	scanf("%f",&ta);
	
	Gross = base + (base * hra / 100) + (base * da / 100) + (base * ta / 100);
	
	printf("Gross Salary:%.2f",Gross);
	return 0;
}
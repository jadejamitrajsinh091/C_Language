#include <stdio.h>

int main()
{
	printf("Welcome To Tempreture Converter!\n");
	
	float cel,fah;
	
	printf("Enter Celsius value:\n");
	scanf("%f",&cel);
	
	fah = (9.0/5.0 * cel) + 32;
	
	printf("%.1f,The Temperature In Fahrenheit:\n",fah);
	
	
	
	return 0;
}
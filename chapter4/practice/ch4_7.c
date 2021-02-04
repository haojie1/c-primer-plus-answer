#include<stdio.h>

int main(void)
{
	const GALLON_TO_LITRE = 3.785;
	const MILE_TO_KM = 1.609;
	float cost_gallon, miles;

	printf("Please input the gas you have used: ");
	scanf("%f", &cost_gallon);
	printf("Please input the miles you have passed: ");
	scanf("%f", &miles);
	
	printf("About %.1f miles per one gallon\n", miles/cost_gallon);
	printf("About %.1f km per litre\n", miles*MILE_TO_KM/(cost_gallon*GALLON_TO_LITRE));

	return 0;
}

#include<stdio.h>

int main(void)
{
	const float INCH_TO_CM = 2.54;
	float height;

	printf("Please input your height(inch): ");
	scanf("%f", &height);
	printf("Your height is %fcm\n", height*INCH_TO_CM);	

	return 0;
}

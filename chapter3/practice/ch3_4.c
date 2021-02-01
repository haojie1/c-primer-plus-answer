#include<stdio.h>

int main(void)
{
	float data;
	printf("Please input a float number: ");
	scanf("%f", &data);
	printf("The input is %f or %e\n", data, data);
	
	return 0;
}

#include<stdio.h>

int main(void)
{
	float f_data;
	printf("Please input a float number:___\b\b\b");
	scanf("%f", &f_data);

	printf("The input is %f or %e\n", f_data, f_data);

	return 0;
}

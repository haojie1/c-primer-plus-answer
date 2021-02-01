#include<stdio.h>

int main(void)
{
	const float ONE_YEAR_SECONDS = 3.156e7;
	int age;
	
	printf("Please input your age: ");
	scanf("%d", &age);
	printf("%d years have %e seconds\n", age, age*ONE_YEAR_SECONDS);	

	return 0;
}

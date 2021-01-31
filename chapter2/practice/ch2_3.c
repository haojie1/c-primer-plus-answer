#include<stdio.h>

int main(void)
{
	const int ONE_YEAR_DAYS = 365;
	int age;

	printf("Please input you age: ");
	scanf("%d", &age);
	printf("Your age: %d\n", age);
	printf("Days: 	  %d\n", age*ONE_YEAR_DAYS);

	return 0;
}

#include<stdio.h>

int main(void)
{
	char first_name[10], second_name[10];

	printf("Please input your name: ");
	scanf("%s%s", first_name, second_name);
	
	printf("First Name: %s\n", first_name);
	printf("Second Name: %s\n", second_name);
	
	return 0;
}

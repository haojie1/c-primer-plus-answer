#include<stdio.h>
#include<string.h>

int main(void)
{
	char first_name[10], second_name[10];
	int first_length, second_length;

	printf("Please input your first name: ");
	scanf("%s", first_name);
	printf("Please input your second name: ");
	scanf("%s", second_name);
	first_length = strlen(first_name);
	second_length = strlen(second_name);
	
	printf("%s %s\n", first_name, second_name);
	printf("%*d %*d\n", first_length, first_length, second_length, second_length); 
	printf("%s %s\n", first_name, second_name);
	printf("%-*d %-*d\n", first_length, first_length, second_length, second_length); 

	return 0;
}

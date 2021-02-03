#include<stdio.h>

int main(void)
{
	float height;
	printf("Please input your height:(inch) ");
	scanf("%f", &height);
	printf("Dabney, you are %.3f feet tall\n", height/12);
	
	return 0;
}

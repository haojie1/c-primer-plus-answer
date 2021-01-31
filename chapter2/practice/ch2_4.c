#include<stdio.h>
void function1();
void function2();

int main(void)
{
	const int TIMES = 3; 
	int count;

	for(count=0; count<TIMES; count++)
	{
		function1();
	}
	function2();

	return 0;
}

void function1()
{
	printf("For he's a jolly good fellow!\n");
}


void function2()
{
	printf("Whine nobody can deny!\n");
}

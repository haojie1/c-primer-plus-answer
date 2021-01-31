#include<stdio.h>
void showSmile();

int main(void)
{
	const int TIMES = 3; 
	int count1, count2;

	for(count1=0; count1<TIMES; count1++)
	{
		for(count2=0; count2<TIMES-count1; count2++)
		{
			showSmile();
		}
		printf("\n");
	}
	
	return 0;
}


void showSmile()
{
	printf("Smile");
}

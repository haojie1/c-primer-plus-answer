#include<stdio.h>
#include<inttypes.h>
#include<limits.h>
#include<float.h>

int main(void)
{
	printf("INT_MAX is: %d\n", INT_MAX);	
	printf("LONG_MAX is: %ld\n", LONG_MAX);	
	printf("LLONG_MAX is: %lld\n", LLONG_MAX);	
	printf("FLT_MAX is: %e\n", FLT_MAX);	
	printf("DBL_MAX is: %e\n", DBL_MAX);	
	printf("FLT_MIN is: %e\n", FLT_MIN);	
	printf("DBL_MIN is: %e\n", DBL_MIN);	

	printf("\n");

	printf("INT_MAX + 1 is: %d\n", INT_MAX+1);	
	printf("LONG_MAX + 1 is: %ld\n", LONG_MAX+1);	
	printf("LLONG_MAX + 1 is: %lld\n", LLONG_MAX+1);	
	printf("FLT_MAX + FLT_MAX is: %e\n", FLT_MAX+FLT_MAX);	
	printf("DBL_MAX + DBL_MAX is: %e\n", DBL_MAX+DBL_MAX);	
	printf("FLT_MIN/2 is: %e\n", FLT_MIN-FLT_MIN/2); 	//lose the effective bit
	printf("DBL_MIN/2 is: %e\n", DBL_MIN-2*DBL_MIN);	//lose the effective bit	

	return 0;
}

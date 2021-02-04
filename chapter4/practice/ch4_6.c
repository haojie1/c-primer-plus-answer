#include<stdio.h>
#include<float.h>

int main(void)
{
	double d_data = 1.0/3.0;
	float f_data = 1.0/3.0;	
	
	printf("%.4lf\n", d_data);
	printf("%.12lf\n", d_data);
	printf("%.16lf\n", d_data);

	printf("%.4f\n", f_data);
	printf("%.12f\n", f_data);
	printf("%.16f\n", f_data);
	
	printf("FLT_DIG is %d\n", FLT_DIG);
	printf("DBL_DIG is %d\n", DBL_DIG); 

	return 0;
}

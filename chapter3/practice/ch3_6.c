#include<stdio.h>

int main(void)
{
	const double HYDRONE_WEIGHT = 3e-23;
	const double QUARK_WATER_WEIGHT = 950;
	float quark;

	printf("Please input the mount of water(quark): ");
	scanf("%f", &quark);
	printf("%f water has %e hydrones\n", quark*QUARK_WATER_WEIGHT, quark*QUARK_WATER_WEIGHT/HYDRONE_WEIGHT);

	return 0;
}

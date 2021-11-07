#include <stdio.h>

int main()
{
	float vyska, hmotnost, bmi;
	scanf("%f %f", &vyska, &hmotnost);
	bmi = hmotnost / (vyska*vyska);
	printf("BMI: %.2f\n", bmi);
	if (bmi<= 18.5 )
		printf("podvaha\n");
	if (bmi>18.5 && bmi<25)
		printf("normalna hmotnost\n");
	if (bmi>25 && bmi<30)
		printf("nadvaha");
	else if (bmi >= 30)
		printf("obezita\n");
	return 0;
	
}

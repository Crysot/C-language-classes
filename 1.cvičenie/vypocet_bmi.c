#include <stdio.h>

int main()
{
	int n,i;
	float vyska, hmotnost, bmi;
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	scanf("%f %f", &vyska, &hmotnost);
	bmi = hmotnost / (vyska*vyska);
	print
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

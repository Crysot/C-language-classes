#include <stdio.h>

int main()
{
	int n,i;
	float vyska, hmotnost, bmi;
	int podvaha=0,normal=0,nadvaha=0,obezita=0;
	scanf("%d", &n);

	for (i=1;i<=n;i++) {
	scanf("%f %f", &vyska, &hmotnost);
	bmi = hmotnost / ((vyska/100)*(vyska/100));
	if (bmi<= 18.5 )
		podvaha += 1;
	if (bmi>18.5 && bmi<25)
		normal +=1;
	if (bmi>25 && bmi<30)
		nadvaha +=1;
	else if (bmi >= 30)
		obezita +=1;
	
	}
	printf("Podvaha: %d\n", podvaha);
	printf("Normalna hmotnost: %d\n", normal);
	printf("Nadvaha: %d\n", nadvaha);
	printf("Obezita: %d\n", obezita);
	return 0;
}

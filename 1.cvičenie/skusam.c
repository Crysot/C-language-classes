#include <stdio.h>

int main()
{
	
	float obvod,obsah,r;
	scanf("%f", &r);
	obvod = 2*3.14*r;
	obsah = 3.14*r*r;
	printf("obvod kruhu je %.2f\n", obvod);
	printf("obsah kruhu je %.2f", obsah);
	return 0;
}

#include <stdio.h>

int main()

{
	
	float prevod,a;
	scanf("%f", &a);
	prevod = (a-32)*5/9;
	printf("%.2f\n", prevod);
	if (prevod < 0)
		printf("mrzne\n");
	else if (prevod > 100)
		printf("vrie");
		
	return 0;
}

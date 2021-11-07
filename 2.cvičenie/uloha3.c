#include <stdio.h>

int main()

{
	char c,d;
	int ch1,ch2;
	scanf("%c %c",&c,&d);
	c = c-32;
	d = d-32;
	
	printf("%c %d \n%c %d\n", c , c , d, d);
	
	return 0;	
	
}

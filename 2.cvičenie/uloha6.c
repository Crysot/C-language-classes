#include <stdio.h>

int main()

{
	int c1,c2,c3,min;
	scanf ("%d %d %d",&c1, &c2, &c3);
	if (c2<c1)
		min=c2;
		else min=c1;
	
	if (c3<min)
		min=c3;
		
	printf("Najmensie cislo z %d %d %d je: %d", c1, c2, c3, min);
	return 0;
}

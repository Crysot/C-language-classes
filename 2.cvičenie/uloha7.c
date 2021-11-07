#include <stdio.h>

int main()

{
	int c1,c2,c3;
	
	scanf ("%d %d %d",&c1 , &c2 , &c3);
	if (c1>c2) {
		c2 = c2-c1;
		c1 = c1+c2;
		c2 = c1-c2;
	}
	 if (c1>c3) {
		c3 = c3-c1;
		c1 = c3+c1;
		c3 = c1-c3;
	}
	
	if (c2>c3) {
		c3 = c3-c2;
		c2 = c3+c2;
		c3 = c2-c3;
	}
	
	printf("%d %d %d\n", c1 , c2 , c3);
		
		return 0;
}

#include <stdio.h>	

int main()

{
	int f,g,d;
	scanf("%d %d %d", &f, &g, &d);
	for (;f<=g;f++) {
	
		if (f%d == 0)
	 		printf("%d ", f) ;
	}

}

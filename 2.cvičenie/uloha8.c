#include <stdio.h>

int main()

{
	char c,d,e;
	scanf("%c %c %c",&c,&d,&e);
	if ((c==d) && (c==e))
	
		printf("vsetky pismena su rovnake");
	else if (c==d || c==e || e==d)
		printf("dve pismena su rovnake");	
		
	else printf("vsetky pismena su rozne");
	
	return 0;
}

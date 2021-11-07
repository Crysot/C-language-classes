#include <stdio.h>

int main()

{
	int c;
	c = getchar();
	if ((c>47 && c<58) || (c>64 && c<91) || (c>94 && c<123))
		printf("alfanumericky znak");
		
	else 
		printf("Interpunkcny znak");
		
	return 0;
}

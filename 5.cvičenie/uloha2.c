#include <stdio.h>

int main()

{
	int c;
	FILE *fr,*fw;
	fr = fopen ( "znak.txt", "r");
	c = getc(stdin);
	if ((c == 's') || (c == 'S'))
		{
			fw = fopen ("novy.txt", "w");
			while ((c= getc(fr)) != EOF)
				putc(c,fw);
			fclose(fw);
		}
		else {
		
		while ((c = getc(fr))  != EOF) 
		putchar(c);
	}
	fclose(fr);
	return 0;
		
}

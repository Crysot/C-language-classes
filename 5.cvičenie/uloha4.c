#include <stdio.h>

int main()

{
	int c,malepismeno=0;
	FILE *fr,*fa;
	fr = fopen ("vstup.txt", "r");
	fa = fopen ("cisla.txt", "a");
	
	while ((c=getc(fr)) != EOF){
	putc(c,fa);
		if (c<123 && c> 96)
			malepismeno++;
		while ((c=getc(fr)) != '\n'){
			if (c<123 && c> 96)
			malepismeno++;
			putc(c,fa);
			
		}
		fprintf(fa,"\n");
		fprintf(fa,"%d",malepismeno);
		fprintf(fa,"\n");
		malepismeno=0;
	}
	
	fclose(fa);
	fclose(fr);
	return 0;
}

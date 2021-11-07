#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fw,*fr;
	int i=0,j=0,c,pos;
	char str1[500],str2[500];
	int pozicia [50];
	fr = fopen ("vstup.txt", "r");
	while ((c=getc(fr)) != EOF){
		str1[i] = c;
		i++;
	}
	printf("%s",str1);
	return 0;
}

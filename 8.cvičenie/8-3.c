#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int p, i=0, j, k, d;
	char s[80];
	FILE *fp, *f2;
	fp = fopen ("prvy.txt","r");
	f2 = fopen ("druhy.txt","w");
	while(1)
	{
	fgets(s, 80, fp);
		
	if(s[0]!=0)
	{
	
	i++;
	
	if(i==1)
		{
			d=strlen(s);
			fprintf(f2,"%03d %s", i, s);
			continue;
		}
	if(i%2==0)
		{
		d=strlen(s)-2;
		for(k=0; k<d; k++)
			{
				p=s[k];
				s[k]=s[d];
				s[d]=p;
				d--;
			}
		}
	if(i%3==0)
		{
			d=strlen(s);
			for(j=0; j<d; j++)
			{
				if(s[j]==' ') s[j]='*';
			}
		}
	fprintf(f2,"%03d %s", i, s);

	for(j=0; j<=d; j++) s[j]=0;
	}
	else break;
	}
	fclose(fp);
	fclose(f2);
	return 0;
	
}

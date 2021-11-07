#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fw,*fr;
	int i=0,k,c,j,p,dlzka;
	char str1[500];
	fr = fopen ("vstup.txt", "r");
	fw = fopen ("vystup.txt" , "w"); 
	
	while(1)
	{
	fgets(str1, 80, fr);
		
	if(str1[0]!=0)
	{
	
	i++;
	
	if(i==1)
		{
			dlzka=strlen(str1);
			fprintf(fw,"%03d %s", i, str1);
			continue;
		}
	if(i%2==0)
		{
		dlzka=strlen(str1)-2;
		for(k=0; k<dlzka; k++)
			{
				p=str1[k];
				str1[k]=str1[dlzka];
				str1[dlzka]=p;
				dlzka--;
			}
		}
	if(i%3==0)
		{
			dlzka=strlen(str1);
			for(j=0; j<dlzka; j++)
			{
				if(str1[j]==' ') str1[j]='*';
			}
		}
	fprintf(fw,"%03d %s", i, str1);

	for(j=0; j<=dlzka; j++) str1[j]=0;
	}
	else break;
	}
	printf("%s",str1);
	fclose(fr);
	fclose(fw);
	return 0;
}

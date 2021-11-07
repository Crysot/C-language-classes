#include <stdio.h>
#include <string.h>

int main()

{
	FILE *fr,*fw;
	int c,pos,i=0,k=0,pocet=0,dlzka=0;
	char str1[50];
	char str2[50];
	
	fr = fopen ("vstup.txt","r");
	fw = fopen ("vystup.txt","w");
	while ((c=getc(fr)) != EOF){
		str1[i] = c;
		i++;
		dlzka++;
	}
	i=0;
		while (str1[i] != '\n'){
			i++;
			pos++;
		}
			for (i=pos-1;i>=0;i--){
			str2[k] = str1[i];
			k++;
		}
		str2[k]= '\n';
		k++;
			for (i=dlzka-1; i>=pos;i--){
			str2[k] = str1 [i];
			k++;
		}	
		str2[k] = '\0';
	
	fprintf(fw,"%s",str2);
	fclose (fw);
	fclose (fr);
	return 0;
}

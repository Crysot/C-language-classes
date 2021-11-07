#include <stdio.h>
#include <string.h>

int main()

{
	char str1[50],str2[50];
	int i,k=0,dlzka;
	
	printf("napln pole: ", str1);
	scanf("%s50",str1);
	dlzka = strlen(str1);
	if (i>50)
		 printf ("pole je naplnene\n");
		
	
	for (i=0; i<=dlzka-1;i++)
	{
		if (str1[i]=='*'){
		
			str2[k] = '>';
			str2[k+1] = '*';
			str2[k+2] = '<';
			k += 2;
	}
		else 
			str2[k]=str1[i];
			k++;
	}
	
	printf("%s", str2);
	return 0;
	
}

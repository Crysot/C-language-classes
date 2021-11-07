#include <stdio.h>
#include <string.h>

int main ()

{
	char str1[50],str2[50];
	int i,k=0,dlzka=0;
	
	printf("napis retazec: ");
	scanf("%50s", str1);
	dlzka = strlen(str1);
	for (i=dlzka-1;i>=0;i--)
	{
		str2[k]= str1[i];
		k++;
	}
	str2[dlzka]= '\0';
	printf("%s \n",str2);
	return 0;
	
}

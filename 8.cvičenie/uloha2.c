#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strinsert (char str1[], int d, char str2[], int pozicia)
{
	int i, j=0, dlzkastr2;
	dlzkastr2 = strlen(str2);
	for(i=d; i>=pozicia+dlzkastr2; i--)
	{
		str1[i]= str1[i-dlzkastr2];
	}
	for(i=pozicia; i<=pozicia+dlzkastr2-1; i++)
	{
		str1[i]=str2[j];
		j++;
	}
	printf("%s", str1);
}

main()
{
	int d=50, pozicia, j, p;
	char str1[51], str2[30];
	scanf("%s", str1);
	scanf("%s", str2);
	p = strlen(str2);
	j = strlen(str1);
	if( p+j>50)
	{
		printf("mimo rozsahu, dlhy text");
		return 0;
	}
	scanf("%d", &pozicia);
	strinsert(str1, d, str2, pozicia);
	return 0;
}

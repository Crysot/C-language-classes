#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strinsert (char s[], int d, char s2[], int dlzkastr2)
{
	int k, p, l, c=0;
	p = strlen(s2);
	for(k=d; k>=dlzkastr2+p; k--)
	{
		s[k]= s[k-p];
	}
	for(l=dlzkastr2; l<=dlzkastr2+p-1; l++)
	{
		s[l]=s2[c];
		c++;
	}
	
	printf("%s", s);
	
}
main()
{
	int d=50, dlzkastr2, j, p;
	char s[51], s2[30];
	scanf("%s", s);
	scanf("%s", s2);
	scanf("%d", &dlzkastr2);
	p = strlen(s2);
	j = strlen(s);
	if( p+j>50)
	{
		printf("prilis dlhe retazce");
		return 0;
	}
	strinsert(s, d, s2, dlzkastr2);
	return 0;
}

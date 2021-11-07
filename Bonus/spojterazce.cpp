#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s1[50],s2[50],*s3;
	scanf("%s",s1);
	scanf("%s",s2);
	int j=0,dlzka1,dlzka2;
	dlzka1= strlen(s1);
	dlzka2= strlen(s2);
	s3 = (char *) malloc ((dlzka1+dlzka2)*sizeof (char));
	for (int i=0;i<=dlzka1;i++){
		s3[i]= s1[i];
	}
	for (int i=dlzka1;i<=(dlzka1+dlzka2);i++){
		s3[i] = s2[j];
		j++;
	}
	printf("%s",s3);
	return 0;
}

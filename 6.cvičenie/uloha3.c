#include<stdio.h>
#include<string.h>

int main()
{
	int dlzka,i=0,k=0,pocet;
	char str1[51],a[4],str2[50];
	printf("zadaj vstup: ");
	scanf("%50s",str1);
	scanf("%3s",a);
	dlzka = strlen(str1);
	
	for (i=0;i<=dlzka-1;i++)
	{
	if(str1[i]==a[0] && str1[i+1]==a[1] && str1[i+2]==a[2])
		{
			i +=2;
		}
		else
		{
			str2[k]=str1[i];
			k++;
			pocet++;
		}
	}	
	str2[pocet]= '\0';
	printf("%s",str2);
	return 0;
}


#include <stdio.h>
#include <conio.h>
#include <string.h>

void strinsert (char str1[], int d, char str2[], int i)
{
	int x = 0, f = 0;
	char str3[50];
	int dlzka = strlen(str1);
	for (int j = 0; j < dlzka; j++)
	{
		if (i == j)
		{
			dlzka = dlzka + strlen(str2);
			if(dlzka>=d) return;
			while(str2[x]!='\0')
			{
				for(int k=j;k < dlzka;k++)
				{
					str3[f] = str1[k]; 	
					f++;
				}
				str1[j] = str2[x];
				j++;
				x++;
			}
			str3[f] = '\0';
			x = 0;
			while(str3[x]!='\0')
			{
				str1[j] = str3[x];
				j++;
				x++;
			}
		}
	}	
	printf("%s", str1);
}


int main() 
{	
	char str1[50], str2[50];
	int i, d;
	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%d %d", &i, &d);
	
	strinsert(str1, d, str2, i);
	
    return 0;
}







#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() 
{	
	int  i,j,dlzka=0;
	char znak[50];
	scanf("%50s",znak);
	dlzka = strlen(znak);
	for (i = 0; i < dlzka; i++)
	{
		if(znak[i] == '.')
		 {
			for(j = i; j < dlzka; j++)
			{
				znak[j] = znak[j+1];
			}
			dlzka = dlzka - 1;
		i--;
		}
		if(znak[i] == '*')
		{
			dlzka = dlzka + 1;
			for (j = dlzka; j > i; j--)
			{
				znak[j] = znak[j-1];
			}
			znak[i+1] = '*';
			i = i + 1;
		}		
	}
	printf("%s", znak);
	printf("\n");
    return 0;
}

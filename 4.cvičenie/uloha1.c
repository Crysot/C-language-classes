#include <stdio.h>

int main()

{
	int n,i,j,cislo=1;
	scanf("%d", &n);	
	if (n>=1 && n<=10)
	{
		for (j=1;j<=n;j++){
		for (i=1;i<=n;i++)
			if (i>j)
				{
				}
			else{
				printf("%d", cislo);
				putchar(' ');
				cislo += 1;			
			}
		putchar('\n');		
		
		}
	}
	else printf("Nespravny vstup");
	return 0;	
} 

#include <stdio.h>

int rovnaka(int matica[][10])
{
	int x,i,j,sum=0,sum1=0;
	for (i=0;i<=0;i++){
		for (j=0;j<=9;j++){
			scanf("%d",&matica[i][j]);
			sum=sum+matica[i][j];
		}
	} 
	for (i=9;i<=9;i++){
		for (j=0;j<=9;j++){
			scanf("%d",&matica[i][j]);
			sum1=sum1+matica[i][j];
		}
	} 
	if (sum1 == sum) 
		x = 1;
		else x = 0;
	return x; 
}

int main()
{
	int matica[10][10],vysledok;
	vysledok = rovnaka(matica);
	printf("%d", vysledok);
	return 0;	
}

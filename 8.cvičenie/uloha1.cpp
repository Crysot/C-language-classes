#include <stdio.h>
#include <stdlib.h>

int *alokuj (int n)
{
	return ((int *) malloc(n * sizeof (int)));
}

void nacitaj (int *p_i, int n)
{
	int i;
	
	for (i = 0; i< n; i++)
	{
		printf("zadajte cislo %d : ", i+1);
		scanf("%d", p_i+i);
	}
	
}

void vypis (int *p, int n)
{
	int i;
	
	for (i=0; i< n; i++){
		printf("%d \n",*(p+i));	
		
	}
}

int main()
{
	int *cisla, vyp, n;
	scanf("%d", &n);
	cisla = alokuj(n);
	nacitaj (cisla, n);
	vypis(cisla,n);
	return 0;
}

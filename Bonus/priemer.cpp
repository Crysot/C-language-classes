#include <stdio.h>

float moj_priemer(int pole[], int pocet)
{
	int pom,i;
	for (i=0;i<=pocet;i++){
		pom=pom+pole[i];
	}
	return pom/pocet;
}

int main()
{
	int pole[4],i,n=4;
	float vysledok;
	for (i=0;i<=n;i++){
		scanf("%d", &pole[i]);
	}
	vysledok = moj_priemer(pole,n);
	printf("%f",vysledok);
	return 0;
}

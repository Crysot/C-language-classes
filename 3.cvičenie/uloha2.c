#include <stdio.h>

int main()

{
	int  i,n,cislo,hodnota=0;
	scanf("%d",&n);
	
	for (i=1;i<=n;i++) {
		scanf("%d", &cislo);
		if ((cislo>0)&&(cislo<100))
			hodnota +=1;
	}
	printf("%d\n", hodnota);
}

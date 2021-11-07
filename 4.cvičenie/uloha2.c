#include <stdio.h>

int main()

{
	int j,i,n,riadok,cislo=1;
	scanf("%d", &n);
	if (n>0 && n<16){
	
	for (i=1;i<=n;i++){
		printf("%2d: ",i);
		
		for (j=1;j<=n;j++)
		
			if (i>j)
				{
					cislo=1;
					riadok +=1;
				}
			else{
				printf("%4d", cislo);
				cislo += 1;
							
			}
		putchar('\n');	
	}
}
	else printf("smola");
	return 0;
}

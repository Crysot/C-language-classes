#include <stdio.h>

int main ()
{
	int i,j,k,n,pom;
	scanf("%d",&n);
	if ((n>0 && n<16)&& ((n % 2) !=0)){
	
	pom=n;
		for(k=1;k<=n;k++){
				for (i=1;i<=n;i++)
					if (i<=k)
						putchar ('*');
					else 
						putchar ('-');
		putchar('\n');	 
}
	for (k=n+1;k<=(n*2)-1;k++){
		for (i=1;i<=n;i++)
		if (i<pom)
			putchar('*');
		else 
			putchar ('-');
		putchar('\n');
		pom -= 1;
	}
}
	else printf("zle cislo, smola");
	return 0;
}

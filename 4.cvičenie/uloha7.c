#include <stdio.h>

int main()

{
	int i,j,k,n,s;
	scanf("%d %d",&n, &s);	
	if ((n>0 && n<16)&& ((n % 2) !=0) && (s>0 && s<6)){	
	for (i=1;i<=n;i++){
		for (k=1;k<=s;k++)
		for (j=1;j<=n ;j++){
			if ((j==i) || (j==(n-i)+1) || (j==(n+1)/2) || (i==(n+1)/2) ){
				putchar('*');
		}
			else
				putchar('-');
		}
	putchar('\n');
	}	
}
else printf("smola, zle zadane cisla");

	return 0;
}

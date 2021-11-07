#include <stdio.h>

int main()

{
	int i,j,k,n;
	scanf("%d",&n);	
	if ((n>0 && n<16)&& ((n % 2) !=0)){
	for (i=1;i<=n;i++){
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

	return 0;
}

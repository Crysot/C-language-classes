#include <stdio.h>

int main()
{
	int i,j,k,v,n;
	scanf("%d %d",&n, &v);	
	if ((n>0 && n<16)&& ((n % 2) !=0) && (v>0 && v<6)){
	for (k=1;k<=v;k++)
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
else printf("smola, zle cislo");
	return 0;
}

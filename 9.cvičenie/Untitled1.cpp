#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j, *p_i;
	scanf ("%d",&i);
	j=i;
	p_i = (int*) malloc (i*sizeof (int));
	for (i=0;i<=j-1;i++){
		printf("%d \n",*p_i+i);
	}
	free(p_i);
	return 0;
}

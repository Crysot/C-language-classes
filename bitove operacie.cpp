#include <stdio.h>

int main()
{
	int i,ii,j,k;
	ii = 256>>7;
	j = 15 & 21;
	k = 15 ^ 21;
	printf("256 >> 7 = %d\n",ii);
	printf("15 & 21 = %d\n",j);
	printf("15 ^ 21 = %d\n",k);
	
	return 0;
}

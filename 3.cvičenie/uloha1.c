#include <stdio.h>

int main()

{
	int n,i;
	float j,min,max;
	scanf ("%d", &n);
	for (i=1;i<=1;i++) 
			scanf("%f", &max);
			min=max;
	for (i=2;i<=n;i++){
		scanf("%f",&j);	
		if (j>max)
			max= j;
		if (j<min)
			min= j;
		}
	printf("Minimum je: %.2f\n",min);
	printf("Maximum je: %.2f\n",max);
	 return 0;
}

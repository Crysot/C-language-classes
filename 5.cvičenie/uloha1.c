#include <stdio.h>

int main()

{
	FILE *fw;
	int i;
	float n,v;
	scanf("%f",&n);
	fw = fopen ("nasobky.txt", "w");
	for (i=1;i<11;i++)
	{
		v= i * n;
		fprintf(fw, "%4d * %.2f = %.2f\n", i,n,v);
			}
	fclose(fw);
	return 0;
}

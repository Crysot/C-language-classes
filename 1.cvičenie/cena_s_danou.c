#include <stdio.h>

int main()
{
	int i;
	float dan;
	scanf("%d", &i);
	dan = (i*0.20) + i;
	printf ("cena bez dane: %d\n", i);
	printf ("predajna cena s danou 20%% je %.2f ", dan);
	return 0;
}


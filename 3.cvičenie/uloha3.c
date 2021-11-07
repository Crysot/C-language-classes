#include <stdio.h>

int main()

{
	int i,male=0,velke=0;
	while ((i= getchar()) != '\n') {
		if ((i > 64) && (i<91))
			velke += 1;
		if ((i > 96) && (i < 123))
			male += 1;
	}
	printf ("%d %d " , male , velke);
	return 0;
}

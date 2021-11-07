#include <stdio.h>

int main()

{
	FILE *fr1,*fr2;
	char c1,c2;
	int dlzkaprvy=0,dlzkadruhy=0,pocetroznych=0,rozdiel=0;
	fr1 = fopen ("prvy.txt", "r");
	fr2 = fopen ("druhy.txt", "r");
	
	c1 = getc(fr1);
	c2 = getc(fr2);
	while ((c1 != EOF) || (c2 != EOF))
	{
		if (c1 != c2 && c1 != EOF && c2 != EOF)
				pocetroznych++;
					
		if (c1 != EOF) {
		
			dlzkaprvy++;	
			c1 = getc(fr1);
	}
		if (c2 != EOF) {
		
			dlzkadruhy++;
			c2 = getc(fr2);
}
}
	if (dlzkaprvy<dlzkadruhy)
		{
			rozdiel = dlzkadruhy - dlzkaprvy;
		 } 
		else rozdiel = dlzkaprvy - dlzkadruhy;

	if ((dlzkaprvy == dlzkadruhy) && pocetroznych == 0)
		printf("subory su identicke");
		else printf("subory maju %d roznych znakov a jeden zo suborov je dlhsi o %d znakov", pocetroznych, rozdiel);
	return 0;
}

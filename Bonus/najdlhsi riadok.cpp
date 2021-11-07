#include <stdio.h>

int main()
{
	FILE *subor;
	char *meno;
	int c,dlzka=0,max=0,vysledok=0,riadok=0;
	subor= fopen ("kopia.txt","r");
		while ((c=getc(subor))!= EOF){
			dlzka++;
			if (c== '\n')
			{
				riadok++;
				if (dlzka>max){
					max=dlzka;
					vysledok = riadok;
					dlzka=0;
					}
				else
					dlzka=0;
				
			}
		}
	printf("%d %d",max-1, vysledok);
	return 0;
}

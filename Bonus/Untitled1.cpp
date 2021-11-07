#include <stdio.h>
#include <stdlib.h>

void statistiky_suboru (FILE *sub)
{
	int c,riadky=0,znaky=0,medzera=0;
	c = getc(sub);
	while ((c=getc(sub)) != EOF){
		znaky++;
		if (c == '\n')
		riadky++; 
		if (c == ' ')
		medzera++;
	}
	printf("znakov je %d\n", znaky);
	printf("medzier je %d\n", medzera);
	printf("riadkov je %d\n", riadky-1);
} 

void najdlhsi_riadok(FILE *sub){
	int c,dlzka=0,cislo=0,max=0,riadok=0;
		while ((c=getc(sub)) != EOF ){
			dlzka++;
			if (c== '\n'){
				riadok++;
			if (dlzka>max){
			max = dlzka-1;
			dlzka = 0;
			cislo = riadok;
		}
			else 
			dlzka = 0;
			
		
}
}
	printf("%d %d",max,cislo);
	}

int main()
{
	FILE *sub;
	sub= fopen ("subor.txt","r");
	statistiky_suboru(sub);
	najdlhsi_riadok(sub);
	fclose(sub);
	return 0;
}

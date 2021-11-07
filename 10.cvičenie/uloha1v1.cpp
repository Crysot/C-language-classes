#include <stdio.h>
#include <stdlib.h>

typedef struct {
		int id;
		char meno[30];
		char destinacia[50];
		int rok;
		int dni;	
	} ZAJAZD;

int nacitaj(FILE *fr, ZAJAZD ludia[])
{
	int pocet=0;
	for (int i=0;i<100;i++){
		fscanf(fr,"%d",&ludia[i].id);
		if (ludia[i].id<0) break;
		fscanf(fr,"%s",&ludia[i].meno);
		fscanf(fr,"%s",&ludia[i].destinacia);
		fscanf(fr,"%d",&ludia[i].rok);
		fscanf(fr,"%d",&ludia[i].dni);
		pocet++;
	}
return pocet;
}

void vypis(ZAJAZD ludia[], int poc){
	
	for (int i=0;i<=poc-1;i++){
		printf("%d ",ludia[i].id);
		printf("%s ",ludia[i].meno);
		printf("%s ",ludia[i].destinacia);
		printf("%d ",ludia[i].rok);
		printf("%d\n",ludia[i].dni);	
	}  
}

void najnovsie(ZAJAZD ludia[], int poc){
	int maxrok,pocdni=0,pocet1=0;
	for (int i=0;i<=poc-1;i++){
		if (ludia[i].rok>=maxrok){
			maxrok=ludia[i].rok;
		}
		if ((ludia[i].rok == maxrok) && (ludia[i].dni>pocdni))
		pocdni=ludia[i].dni;
	}
	for (int i=0;i<=poc-1;i++){
		if (ludia[i].rok==maxrok) pocet1++;
	}
	printf("%d %d\n",pocdni,pocet1);
} 

int main()
{
	FILE *fr;
	int poc,pocet=0;
	fr= fopen("vstup.txt","r");	
	ZAJAZD ludia[100];
		
	poc=nacitaj(fr,ludia);
	vypis(ludia,poc);
	najnovsie(ludia,poc);
	fclose(fr); 
	return 0;
}

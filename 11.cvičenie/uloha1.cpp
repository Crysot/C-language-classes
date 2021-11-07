#include <stdio.h>
#include <stdlib.h>

typedef struct ZAJAZD {
		int id;
		char meno[30];
		char destinacia[50];
		int rok;
		int dni;	
		struct zajazd *dalsi;
	} ZAJAZD;

int nacitaj(FILE *fr, ZAJAZD *q,ZAJAZD *pom)
{
	int pocet=0;
	for (int i=0;i<10;i++){
		fscanf(fr,"%d", &q->id);
		if (q->id<0) break;
		fscanf(fr,"%s",q->meno);
		fscanf(fr,"%s",q->destinacia);
		fscanf(fr,"%d",q->rok);
		fscanf(fr,"%d",q->dni);
		pocet++;
		pom = (ZAJAZD *) malloc (sizeof (ZAJAZD));
		pom=q->dalsi;
	}
return pocet;
}

void vypis(ZAJAZD *q, ZAJAZD *pom int poc){
	
	for (int i=0;i<=poc-1;i++){
		printf("%d ",q->id);
		printf("%s ",q->meno);
		printf("%s ",q->destinacia);
		printf("%d ",q->rok);
		printf("%d\n",q).dni);	
		q++;
	}  
}

void najnovsie(ZAJAZD *q, ZAJAZD *pom int poc){
	int maxrok,pocdni=0,pocet1=0;
	for (int i=0;i<=poc-1;i++){
		if (q->rok>=maxrok){
			maxrok=q->rok;
		}
		if ((q->rok == maxrok) && (q->dni>pocdni))
		pocdni=q->.dni;
	q++;
	}
	for (int i=0;i<=poc-1;q++){
		if ((*q).rok==maxrok) pocet1++;
	q++;
	}
	printf("%d %d\n",pocdni,pocet1);
} 

int main()
{
	FILE *fr;
	int poc,pocet=0;
	fr= fopen("vstup.txt","r");	
	ZAJAZD *pom,*q;
	q = (ZAJAZD *) malloc (sizeof (ZAJAZD));
	q->dalsi=NULL;
	poc=nacitaj(fr,q,pom);
	vypis(q,poc,pom);
	najnovsie(q,poc,pom);
	fclose(fr); 
	return 0;
}

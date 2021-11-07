#include <stdio.h>
#include <string.h>

int najdlhsie_opakovanie (char *s, char c){
	int i,dlzka=0,max=0,pocet=0;
	dlzka = strlen(s);
	for (i=0;i<=dlzka;i++){
		if (s[i]==c)
			pocet++;
		if (s[i] !=c){
			if(pocet>max){
			max=pocet;
			pocet=0;
			}
			else pocet=0;
		}
	}
	return max;
}

int main()
{
	int vysledok;
	char s[50];
	char c='*';
	scanf("%s",s);
	vysledok = najdlhsie_opakovanie(s,c);
	printf("%d",vysledok);
	return 0;
}

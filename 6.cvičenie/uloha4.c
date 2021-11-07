#include <stdio.h>
#include <string.h>

int main()

{
	char str[30];
	int dlzka,i=0,pocet=0,cislo=0;
	printf("zadaj retazec: ");
	scanf("%s30",str);
	dlzka = strlen(str);
	if (dlzka==1)
		printf("0");
	else {
		for (i=0;i<=dlzka;i++){
			
			if (str[i]==str[i+1])
				pocet++;
			else 
			i++;
			cislo = pocet;

	}
}
	
	printf("%d",pocet);

	return 0;
}

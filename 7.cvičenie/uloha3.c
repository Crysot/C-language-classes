#include <stdio.h>
#include <string.h>

int main()

{
	char str1[50],str2[50],sifra[50];
	int i=0,k=0,dlzka=0;
	
	scanf("%s50",str1);
	scanf("%s50",str2);
	dlzka = strlen(str2);
	while (str1[k] != '\0'){
	
			sifra[k] = ((str1[k] - '@') + str2[i]);
			if (sifra[k] >90){
				sifra[k] = ('@' + (sifra[k] - 90));			
			}
		k++;
		i++;
		if (i>dlzka-1) i=0;
	}
	sifra[k]= '\0';
	printf("%s",sifra);
	return 0;
}

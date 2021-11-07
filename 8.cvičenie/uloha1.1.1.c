#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fw,*fr;
	int i=0,j=0,c,k=0,m=0,x,dlzka,p=1,pos,pos1,pos2,pos3;
	char str1[500],str2[500];
	fr = fopen ("vstup.txt", "r");
	while ((c=getc(fr)) != EOF){
		str1[i] = c;
		i++;
	}

	dlzka= strlen(str1);
	for (i=0;i<dlzka;i++){
		if (str1[i] == '\n'){
			pos = i;
			break;
		}
	}
	for (i=pos+1;i<dlzka;i++){
		if (str1[i] == '\n'){
			pos1 = i;
			break;
		}
		
	}
		for (i=pos1+1;i<dlzka;i++){
		if (str1[i] == '\n'){
			pos2 = i;
			break;
		}
	}
		for (i=pos2+1;i<=dlzka;i++){
		if (str1[i] == '\0'){
			pos3 = i-1;
			break;
		}
		
	}
		p = '1';	
		str2[j] = '0';
		str2[j+1] = '0';
		str2[j+2] = p;
		str2[j+3] = ' ';
		j +=4;
		p++;
	
	for (i=0;i<=pos;i++){
		str2[j]=str1[i];
		j++;
	}	
	
		str2[j] = '0';
		str2[j+1] = '0';
		str2[j+2] = p;
		str2[j+3] = ' ';
		j +=4;
		p++;
	for (i=pos1-1;i>=pos;i--){
			str2[j]=str1[i];
		j++;
	}	
		str2[j-1] = '\n';
		str2[j] = '0';
		str2[j+1] = '0';
		str2[j+2] = p;
		str2[j+3] = ' ';
		j +=4;
		p++;
		for (i=pos1+1;i<=pos2;i++){
		str2[j]=str1[i];
		if (str2[j] == ' ')
			str2[j] = '*';
		j++;	
	}
		str2[j] = '0';
		str2[j+1] = '0';
		str2[j+2] = p;
		str2[j+3] = ' ';
		j +=4;
		p++;
	for (i=pos3-1;i>pos2-1;i--){
		str2[j]=str1[i];
		j++;
	}
	dlzka = strlen(str2);
	str2[dlzka]= '\0';
	printf("%s\n",str2);
	return 0;
}

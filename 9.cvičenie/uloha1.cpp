#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
int **create(int riadky, int stlpce)  {  
	int **p, i; 
	p = ((int **) malloc(riadky * sizeof(int *))); 
	for(i = 0; i < riadky; i++)  
	p[i] = (int *) malloc(stlpce * sizeof(int));
	return p; 
	}
	
void vypis(int **pole, int riadky,int stlpce){
		int i,j;
		printf("vypisujem maticu o rozmeroch %d x %d\n", riadky,stlpce);
		for(i = 0; i < riadky; i++){
			for(j = 0; j < stlpce; j++){
				printf("%d ",pole[i][j]);
			}
			printf("\n");
		}	
	}

int MaxTab (int **pole, int riadky,int stlpce){
		int max = 0;
		for(int i = 0; i < riadky; i++){
			for(int j = 0; j < stlpce; j++){
				if(pole[i][j] > max)
					max = pole[i][j];
			}
		}
		return max;
	}
	
int MinTab (int **pole,int riadky,int stlpce,int *polohai, int *polohaj){
		int min;
		min = pole[0][0];
		*polohai = 0;
		*polohaj = 0;
		for(int i = 0; i < riadky; i++){
			for(int j = 0; j < stlpce; j++){
				if(pole[i][j] <= min){
				min = pole[i][j];
				*polohai = i;
				*polohaj = j;
				}
			}
		}
		return min;
	}
	
int Diagonala (int **pole,int riadky, int stlpce){
	int i,j,diag1=0,diag2=0;
	for (int i= 0; i < riadky;i++){
		for (int j=0; j<stlpce;j++){
			if (i==j){
				diag1= diag1+pole[i][j];
			}
		}
	}
	for (i=0; i<riadky;i++){
		for (j=0; j<stlpce;j++){
			if (j==(stlpce-i)-1) {
				diag2 = diag2 + pole[i][j];
			}
		}
	}
	return diag1+diag2;
}

int main()
{
	FILE *fr;
	int i=0,j=0,**pole,stlpce,riadky,min,max=0,dlzka,diagonalsum,polohai,polohaj;
	fr = fopen ("vstup.txt","r");

	fscanf(fr,"%d %d\n",&riadky,&stlpce);
	pole = create (riadky,stlpce);
		for(i = 0; i < riadky; i++){
			for(j = 0; j < stlpce; j++){
				fscanf(fr,"%d",&pole[i][j]);
			}
		}
	vypis(pole,riadky,stlpce);
	printf("\n");
	max = MaxTab(pole,riadky,stlpce);
	printf("maximum je: %d\n",max);
	min = MinTab(pole,riadky,stlpce,&polohai,&polohaj);
	printf("minimum je %d ... suradnica je riadok cislo : %d a stlpec cislo: %d\n",min,polohai,polohaj);
	diagonalsum = Diagonala(pole,riadky,stlpce);
	printf("sucet na diagonalach je: %d",diagonalsum);
	for (i=0;i<riadky;i++){
			free(pole[i]);
			pole[i] = NULL;
		}
	fclose(fr);
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
 
int **create(int riadky, int stlpce)  {  
	int **p, i; 
	p = ((int **) malloc(riadky * sizeof(int *))); 
	for(i = 0; i < riadky; i++)  
	p[i] = (int *) malloc(stlpce * sizeof(int));
	return p; 
	}
	
void vypis(int **pole, int riadky,int stlpce){
	int x,y;
		for(x = 0; x < riadky; x++){
			for(y = 0; y < stlpce; y++){
				printf("%d ",pole[x][y]);
			}
			printf("\n");
		}	
	}

int MaxTab (int **pole, int riadky,int stlpce){
		int max = 0;
		for(int x = 0; x < riadky; x++){
			for(int y = 0; y < stlpce; y++){
				if(pole[x][y] > max)
					max = pole[x][y];
			}
		}
		return max;
	}

int main()
{
	FILE *fr;
	int i=0,j=0,**pole,stlpce,riadky,min,max=0,dlzka,polohaS,polohaR;
	fr = fopen ("vstup.txt","r");

	fscanf(fr,"%d %d\n",&riadky,&stlpce);
	pole = create (riadky,stlpce);
		for(i = 0; i < riadky; i++){
			for(j = 0; j < stlpce; j++){
				fscanf(fr,"%d",&pole[i][j]);
			}
		}
	vypis(pole,riadky,stlpce);
	max = MaxTab(pole,riadky,stlpce);
//	min = MinTab(pole,riadky,stlpce,&polohaR,&polohaS);
	free(pole);
	pole = NULL;
	fclose(fr);
	return 0;
}

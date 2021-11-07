#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

static void pause()
{
   printf("Press any key to continue...\n");
   getch();
}

	int **create(int riadky, int stlpce){
		int **p, i;
		p = (int **) malloc(riadky * sizeof(int *));
		for(i = 0; i < riadky; i++)
			p[i] = (int *) malloc(stlpce * sizeof(int ));
		return p;
	}
	
	void vypis(int **pole, int riadky,int stlpce){
		for(int x = 0; x < riadky; x++){
			for(int y = 0; y < stlpce; y++){
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
	
	int MinTab (int **pole,int riadky,int stlpce,int *polohaR, int *polohaS){
		int min;
		min = pole[0][0];
		*polohaR = 0;
		*polohaS = 0;
		for(int x = 0; x < riadky; x++){
			for(int y = 0; y < stlpce; y++){
				if(pole[x][y] <= min){
				min = pole[x][y];
				*polohaR = x;
				*polohaS = y;
				}
			}
		}
		return min;
	}
	
	int DiagSum (int **pole,int riadky,int stlpce){
		int **p, diagonala = 0,diagonala1 = 0;
		for(int x = 0; x < riadky; x++){
			for(int y = 0; y < stlpce; y++){
				if(x == y){
					diagonala += pole[x][y];
				}
			}
		}
		for(int x = 0; x < riadky; x++){
			for(int y = stlpce; y >= 0; y--){
				if(x==(stlpce-1)-y)
				diagonala1 += pole[x][y];
			}
		}
		return diagonala + diagonala1;
	}
		
int main(){
	int riadky,stlpce,x=0,y=0,c;
	FILE *fr;
	int **pole,pomoc,max = 0,min,diagonala,polohaS,polohaR;
	
	if((fr=fopen("vstup.txt","r"))==NULL){
		printf("Subor sa neda otvorit!\n"); 
	return 0;
	}
	
	fscanf(fr,"%d %d\n",&riadky,&stlpce);
	pole = create(riadky,stlpce);
		for(x = 0; x < riadky; x++){
			for(y = 0; y < stlpce; y++){
				fscanf(fr,"%d",&pole[x][y]);
				//printf("%d ",pole[x][y]);
			}
		}
		
	vypis(pole,riadky,stlpce);
	max = MaxTab(pole,riadky,stlpce);
	min = MinTab(pole,riadky,stlpce,&polohaR,&polohaS);
	diagonala = DiagSum(pole,riadky,stlpce);
	printf("Vystup pre MaxTab: %d\n",max);
	printf("Vystup pre MinTab: %d poloha riadku:%d poloha stlpca: %d\n",min,polohaR,polohaS);
	printf("Vystup pre Diagsum: %d\n",diagonala);
	
	fclose(fr);
	pause();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define FIL 5
#define COL 5
#include <time.h>
void inicializa(int mat[FIL][COL]);
int main()
{
	
	int k,l; //k:filas y l:columnas
	int mat[FIL][COL];
	inicializa(mat);

	printf("\nLa matriz es: \n");

	for(k=0;k<FIL;k++){
		for(l=0;l<COL;l++){
			printf("%d ",mat[k][l]);
			  }
			printf("\n\n");
				  }

return 0;
}

		void inicializa(int mat[FIL][COL]){
			int i,j,aleat=0;
			srand(time(NULL));
			for(i=0;i<FIL;i++){
				for(j=0;j<COL;j++){
					aleat= (rand()%13)+3;
					mat[i][j]=aleat;
						   }	
					}
						}											

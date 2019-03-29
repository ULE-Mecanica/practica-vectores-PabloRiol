#include <stdio.h>
#define filas 9
#define columnas 9
void inicializa(int m[filas][columnas]);
int main()
{
	int mat[filas][columnas];
	int i,j;

	inicializa(mat);

	printf("\nLa matriz es: \n");

	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%d ",mat[i][j]);
			}
			printf("\n\n");
				}

return 0;
}


			void inicializa(int m[filas][columnas]){
				int k,l; //k:filas y l:columnas
				for(k=0;k<filas;k++){
					for(l=0;l<columnas;l++){
						if(k==l){
							m[k][l]=1;
							}else{
								m[k][l]=0;
							     }
						}
							}

						    }

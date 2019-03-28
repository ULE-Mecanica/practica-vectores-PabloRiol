//prorama que me carge dos vectores con cinco elementos y me compare si son iguales. 

#include <stdio.h>
#include<stdlib.h>

#define TAM 5

void inicializa(int v1[TAM], int v2[TAM]);
void compara(int v1[TAM], int v2[TAM]);

int main(){
	
	int vec1[TAM],vec2[TAM];
	
	
	inicializa(vec1,vec2);
	compara(vec1,vec2);
	
	
	return 0;
}

void inicializa(int v1[TAM], int v2[TAM]){
	int i;
	
	for(i=0;i<TAM;i++){
		printf("Introduce la posicion %d  para rellenar el primer vector, ",i+1 ,v1[i]);
		scanf("%d",&v1[i]);
		
	}
	
		printf("\n\n");
	
	for(i=0;i<TAM;i++){
	printf("Introduce la posicion %d para rellenar el segundo vector, ",i+1,v2[i]);
	scanf("%d",&v2[i]);
		
	}
	
}


void compara(int v1[TAM], int v2[TAM]){
	
	
	int i;
	int iguales=1;
	
	for (i=0;i<TAM;i++){
		if(v1[i]!=v2[i]){
			iguales=0;
		}
			
	}
	
	printf("\n\n");
	
	if(iguales==0){
		printf("No son iguales");
		
	}
	else{
		printf("Son iguales.");
	}

}


















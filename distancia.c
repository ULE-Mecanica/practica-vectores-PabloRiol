#include <stdio.h>
#include <math.h>

float distancia_euclidia (float p1[2],float p2[2]);

int main(){
	
	float punto1[2], punto2[2],resultado;
	
	printf("Introduce el valor de las coordenadas x e y del punto 1.\n");
	scanf("%f",&punto1[0]);
	scanf("%f",&punto1[1]);
	
	printf("Introduce el valor de las coordenadas x e y del punto 2.\n");
	scanf("%f",&punto2[0]);
	scanf("%f",&punto2[1]);
	

	
	
	resultado=distancia_euclidia(punto1,punto2);
	
	printf("El valor de la distancia euclidia es %f",resultado);
	return 0;
}

float distancia_euclidia (float p1[2],float p2[2]){
	
	float euclidia;
	euclidia=sqrt(pow(p2[0]-p1[0],2)+pow(p2[1]-p1[1],2));
	
	
	
	
	return euclidia;
	
}





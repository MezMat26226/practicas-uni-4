/*Funciones*/
/*Se ingresan dos n�meros (entero y real)
Determinar:
a) la suma. Funci�n SUMA
b) El promedio. Funci�n PROMEDIO*/

#include<stdio.h>
float suma(float x, float y){
	return x+y;
}
float promedio(float x, float y){
	return (x+y)/2;
		
}

int main(){
	int desicion;
	float x,y;
	printf("Primer numero: "); scanf("%f.\n",&x);
	printf("Segundo numero: "); scanf("%f.\n",&y);
	printf("Que operacion quiere hacer:\n1-suma\n2-promedio\n"); scanf("%i",&desicion);
	switch(desicion){
		case 1: printf("%f", suma(x,y));break;
		case 2: printf("%f", promedio(x,y));break;
	}
	return 0;
}

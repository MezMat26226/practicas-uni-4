#include<stdio.h>
#define TAM 5
int main()
{
	int i;
	int VECTOR[TAM];
	for(i=0;i<TAM;i++){
		printf("Ingrese valores al vector en la posicion nro. %i: "); scanf("%i",&VECTOR[i]);
	}
	for(i=0;i<TAM;i++){
		printf("VECTOR[%i] = %i",i,VECTOR[i]);
		
	}
	return 0;
}

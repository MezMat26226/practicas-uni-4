//Bloque 4.1.2

#include<stdio.h>

int maxima();

int main(){
	
	int x,y,max;
	printf("Introduzca un valor: "); scanf("%i",&x);
	printf("Introduzca otro valor: "); scanf("%i",&y);
	max=maxima(x,y);
	printf("El valor maximo es %i.\n\n",max);
	
	system("pause");
	return 0;
}
int maxima(int a, int b){
	int aux;
	
	if(a>b){
		aux=a;
	}
	else{
		aux=b;
	}
	return aux; /*De esta forma se devuelve un valor*/
	/*Recordar SIEMPRE que una función, solo puede devolver un valor*/
}

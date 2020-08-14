/*Se ingresan números enteros comprendidos entre 100 y 2000.
Determinar usando la función PROMEDIO, el promedio de los números ingresados entre 1200 y 2000
El ingreso de datos finaliza cuando se ingresa un número igual a 99.
VALIDAR el ingreso del Nro. mediante la función VALIDAR */
#include<stdio.h>
#include<stdbool.h>
bool validar (int x);
float PROMEDIO (int x, int y);
int promedio,entrada;
int main(){
   int rec;
   do{
   	printf("Ingrese un numero: "); scanf("%i",&rec);
   	if(validar(rec)){
   		if(rec>=1200 && rec<=2000){
   			entrada += rec;
   	    	promedio++;
   		}
   	}
   	else{
   		printf("%f", PROMEDIO(entrada,promedio));
   		break;
   	}
   }while(true);
	
}
bool validar(int x){
	bool resultado;
	if(!(x == 99) && (x>=1200 || x<=2000)){
		resultado = true;
	}
	else{
		resultado = false;
	}
	return resultado;
}
float PROMEDIO(int x, int y){
	return x/y;
}

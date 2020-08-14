/*Bloque 4.4*/

#include<stdio.h>

void cambio(int*a, int*b, int c);

int main(){
	
	int x,y,z;
	
	x = 5;
	y = 10;
	z = 20;
	
	cambio(&x,&y,z);
	
	printf("El valor actual de x es %i y el valor actual de y es %i y el valor de z es %i.\n\n",x,y,z);
	
	system("pause");
	return 0;
}

void cambio(int*a, int*b, int c){ //a = &x y por tanto *a = x.
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
	c = 100;
}

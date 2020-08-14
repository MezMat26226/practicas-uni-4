/*Bloque 4.2*/

#include<stdio.h>

int factorial(int a);

int main(){
	int x,y,fac1,fac2;
	
	printf("Escriba el numero que desee saber su factorial: "); scanf("%i",&x);
	
	printf("Ahora, el segundo numero que desee saber su factorial: "); scanf("%i",&y);
	
	fac1 = factorial(x);
	fac2 = factorial(y); 
	printf("El primer factorial es: %i.\n\n",fac1);
	printf("El segundo factorial es: %i.\n\n",fac2);
	
	system("pause");
	return 0;
}

int factorial(int a){
	
	int i,aux=1;
	
	for(i=1;i<=a;i++){
		aux *= i;
	}
	return aux;
}

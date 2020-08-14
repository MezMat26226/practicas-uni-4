//Bloque 4.3

#include<stdio.h>

void factorial();

int main(){
	
	factorial();
	
	system("pause");
	return 0;
}
void factorial(){
	int x,i,aux=1;
	
	printf("Introduzca un numero: "); scanf("%i",&x);
	
	for(i=1;i<=x;i++){
		aux *= i;
	}
	printf("El factorial del numero %i es: %i.\n\n",x,aux);
}

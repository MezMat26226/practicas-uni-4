#include<stdio.h>
#include<stdbool.h>

bool funcion(int n);

int main()
{
	int x;
	bool retorno=0;
	printf("Ingrese un numero: "); scanf("%i",&x);
	retorno = funcion(x);
	if(retorno==true){
		printf("\nEl numero es menor a 5.\n\n");
	}
	else{
		printf("\nEl numero es mayor que 5.\n\n");
	}
	return 0;
}
bool funcion(int n)
{
	if(n<5){
		return true;
	}
	else{
		return false;
	}
	
}

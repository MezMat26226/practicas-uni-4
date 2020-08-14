#include<stdio.h>
#include<math.h>

float potencia(float a, float b);
int main()
{
	float x,y,resultado;
	
	printf("Ingrese un numero: "); scanf("%f",&x);
	printf("Ingrese otro numero, para elevar el numero anterior: "); scanf("%f",&y);
	resultado = potencia(x,y);
	printf("%f.\n\n",resultado);
	return 0;
}
float potencia(float a, float b)
{
	float c;
	a = pow (a,b);
	c = a;
	return c;
}

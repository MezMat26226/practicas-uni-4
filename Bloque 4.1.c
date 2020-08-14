/*funciones*/

#include<stdio.h>

int maxima();

 int main(){
 	int x,y;
 	x=3;
 	y=10;
 	
 	maxima(x,y); /*De esta forma, "main" invoca a la función, que en este caso, es maxima. Y al 
 	colocar las variables declaradas en main en el parentesis de la función, se realiza la trans-
	 ferencia de datos, que ahora pasan a llamarse "argumentos".*/
 	system ("pause");
 	return 0;
 }
 
 int maxima(int a, int b){
 	printf("Primero, El valor de x es %i y el valor de y es %i.\n\n",a,b);
 	return 0;
 	/*Las variables declaradas en maxima (a y b), reciben los argumentos de main, y ahora se llaman
 	parametros formales*/
 }

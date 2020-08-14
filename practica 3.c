#include<stdio.h>
void funcion(int a,int b);
int main()
{
	int x,y;
	
	printf("Ingrese un numero: "); scanf("%d",&x);
	do{
	printf("Ingrese otro numero mayor que el anterior: ");scanf("%d",&y);	
	}while(y<x);
	funcion(x,y);
	system("pause");
	return 0;
}
void funcion(int a,int b)
{
	int valores,primo=0,divisores=0;
	for(valores=a;valores<=b;valores++){
		primo = 0;
		for(divisores=2;divisores<valores-1&&primo==0;divisores++){
			if(valores%divisores==0) primo=1;
		}
		if(primo==0){
			printf("%d, ",valores);
		}
	}	
}

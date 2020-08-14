//Bloque 4.2.2

#include<stdio.h>

int calculo(int a);

int main(){
	int x,y,prim1,prim2;
	
	printf("Ingrese un numero: "); scanf("%i",&x);
	printf("Ingrese otro numero: "); scanf("%i",&y);
	
	prim1=calculo(x);
	prim2=calculo(y);
	
	if(prim1>2){
		printf("El numero %i es compuesto.\n\n",x);
	}
	else{
		printf("El numero %i es primo.\n\n",x);
	}
	
	if(prim2>2){printf("El numero %i es compuesto.\n\n",y);
	}
	else{
		printf("El numero %i es primo.\n\n",y);
	}
	
	system("pause");
	return 0;
}
int calculo(int a){
	int i,j=0;
	
	for(i=1;i<=a;i++){
		if(a%i==0){
			j++;
		}
	}
	return j;
}

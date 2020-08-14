#include<stdio.h>
#include<stdbool.h>

bool numero(int a);

int main()
{
	int x;
	bool y=0;
	printf("Ingrese un numero: "); scanf("%i",&x);
	y = numero(x);
	if (y==1){
		printf("1 el numero es primo.\n");
	}
	else{
		printf("0 el numero es compuesto.\n");
	}
	return 0;
}
bool numero(int a)
{
	int i,j=0;
	for (i=1;i<=a;i++)
	{
		if (a%i==0){
			j++;
		}
	}
	if (j<=2){
		return true;
	}
	else{
		return false;
	}
}

#include<stdio.h>
#include<stdbool.h>
bool funcion(int a);
int main()
{
	int x;
	bool retorno = 0;
	printf("Uli cuanto es 100 + 101 + 102?: "); scanf("%d",&x);
	retorno=funcion(x);
	if(retorno==true){
		printf("\t\nSos re pro!.\n\n");
	}
	else{
		printf("\t\nSos una chivota!.\n\n");
	}
	system("pause");
	return 0;
}
bool funcion(int a)
{
	if(a==303){
		return 1;
	}
	else{
		return 0;
	}
}

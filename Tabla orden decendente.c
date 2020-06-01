#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int tabla[10],i;
	
	//Pide los valores
	for(i=0;i<10;i++){
		
		printf("Ingrese un numero entero: ");
		scanf("%d",&tabla[i]);
		
	}
	//imprime los valores en el orden ingresado
	for(i=0;i<10;i++){
		
		printf("%d\t",tabla[i]);
		
	}
	
	printf("\n");
	
	//Imprime los valores en orden decendente
	for(i=9;i>-1;i=i-1){
		printf("%d\t",tabla[i]);
	}
	printf("\n");
	
	
	system("pause");
	return 0;
}

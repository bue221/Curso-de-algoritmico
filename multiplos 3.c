#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num,i;
	
	printf("Ingrese un numero: ");
	scanf("%i",&num);
	
	for(i=3;i<=num;i= i+3){
		
		printf("El numero %i es multiplo del 3 \n",i);
		
	}
	
	system("pause");
	return 0;
}

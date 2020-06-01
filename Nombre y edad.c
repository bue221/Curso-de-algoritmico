#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int edad;
	char nombre[10];
	
	printf("Ingrese su nombre: ");
	scanf("%s",nombre);
	
	printf("Ingrese su edad: ");
	scanf("%i",&edad);
	
	printf("Su nombre es %s\n",nombre);
	printf("Su edad es %i \n",edad);
	
	
	system("pause");
	return 0;
}

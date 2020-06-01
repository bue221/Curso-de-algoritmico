#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int edad;
	printf("Ingrese su edad: ");
	scanf("%i",&edad);
	if(edad>17)
	{
		printf("Usted es mayor de edad \n ");
	}
	else
	{
		printf("Usted es menor de edad \n ");
	}
	system("PAUSE");
	return 0;
}

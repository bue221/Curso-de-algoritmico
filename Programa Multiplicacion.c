#include <stdio.h>
#include <stdlib.h>
#include <math.h> /*Libreria de funciones matematicas*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
							/*Multiplicacion de dos numeros*/

int main() 
{
	
	float num1,num2,resultado;
	printf("Ingrese el primer valor a multiplicar ");
	scanf("%f",&num1);
	printf("Ingrese el segundo valor a multiplicar ");
	scanf("%f",&num2);
	resultado = num1 * num2;
	printf("El resultado de la multiplicacion es: %.2f ",resultado);
	system("PAUSE");
	return 0;
}

#include <stdio.h> /*Libreria std estandar io input/output*/
#include <stdlib.h> /*Libreria estandar lib library funciones tipo texto y numeros.*/
#include <math.h> /*Libreria de funciones matematicas*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	
	float num1, num2, suma;
	printf("Ingrese el primer valor a sumar  ");
	scanf("%f", &num1);
	printf("Ingrese el segundo valor a sumar  ");
	scanf("%f", &num2);
	suma = num1 + num2;
	printf("El valor de la suma es:%.2f ",suma);
	system("PAUSE");
	return 0;
	
}

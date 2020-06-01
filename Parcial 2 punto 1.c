#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num,i,promedio,suma = 0;
	printf("Ingrese un numero: ");
	scanf("%i",&num);
	
	while(num>0){
		
		suma = num + suma ;
		i = i + 1;
		
		printf("Ingrese un numero: ");
		scanf("%i",&num);	
	
	}
	promedio = suma / i;
	printf("La cantidad de numeros ingresados fue de %i\n",i);
	printf("La suma de los numeros ingresados es %i\n",suma);
	printf("El promedio de los numeros ingresados es de %i\n",promedio);
	
	
	system("pause");
	return 0;
}

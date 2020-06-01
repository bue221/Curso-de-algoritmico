#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int tabla[10],i,j=1;
	float media,suma;
	
	for(i=0;i<10;i++){
		
		printf("Ingrese un numero: ");
		scanf("%i",&tabla[i]);
			
	}
	
	//Imprimen valores ingresados
	printf("\n");
	printf("Datos ingresados:  ");
	for(i=0;i<10;i++){
		
		printf("%i\t",tabla[i]);
		
	}
	
	//suma
	suma = tabla[0];
	for(i=1;i<10;i++){
		
		suma+=tabla[i];
		j=j+1;
		
	}
	
	//se calcula la media
	media= suma/j;
	printf("\nLa suma de los datos es: %f y la cantidad de datos ingresados es: %d",suma,j);
	printf("\nLa media es %f",media);
	
	//numeros superiores a la media
	printf("\nNumeros superiores a la media:\n");
	
	for(i=0;i<10;i++){
		
		if(tabla[i]>media){
			printf("%i\n",tabla[i]);
		}
		
	}	
	
	system("pause");
	return 0;
}

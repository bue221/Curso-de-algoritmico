#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,num,num1;
	printf("Digite 1 raiz cuadrada, 2 para exponente, 3...");
	scanf("%d",&i);
	
	switch(i){
		case 1:
			printf("Ingrese el numero del cual desea  conocer la raiz cuadrada\n");
			scanf("%i",&num);
			printf("la raiz cuadrada de %i es %f",num,sqrt(num));
			break;
		
		case 2:
			printf("Ingrese el numero de la base\n");
			scanf("%i",&num);
			printf("Ingrese el numero del exponente\n");
			scanf("%i",&num1);
			int exponentes = pow(num,num1);
			printf("El resultado es %i",exponentes);
			break;
		
		default:
			break;
	}
	return 0;
}

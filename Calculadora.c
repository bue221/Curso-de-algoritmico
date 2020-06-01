#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num1,num2,ope;
	printf("--------------CALCULADORA---------------------\n");
	printf("----------------------------------------------\n");
	printf("-----------------MENU-------------------------\n"); 
	printf("---------1)suma--------2)resta----------------\n");
	printf("----------------------------------------------\n");
	printf("---------3)division----4)Multiplicacion-------\n");
	printf("----------------------------------------------\n");
	printf("---------5)Exponentes--6)Raiz-----------------\n");
	printf("----------------------------------------------\n");
	printf("----------------7)salir-----------------------\n");
	
	printf("\nSeleccione la operacion que desea hacer segun el numero: ");
	scanf("%i",&ope);
	
	switch(ope){
		case 1:
			printf("\nIngrese el primer numero: ");
			scanf("%i",&num1);
			
			printf("\nIngrese el segundo numero: ");
			scanf("%i",&num2);
			
			printf("\nEl resultado de la suma es: %i\n",num1+num2);
		
			break;
		
		case 2:
			printf("\nIngrese el primer numero: ");
			scanf("%i",&num1);
			
			printf("\nIngrese el segundo numero: ");
			scanf("%i",&num2);
			
			printf("\nEl resultado de la resta es: %i\n",num1-num2);
		
			break;
			
		case 3:
			printf("\nIngrese el primer numero: ");
			scanf("%i",&num1);
			
			printf("\nIngrese el segundo numero: ");
			scanf("%i",&num2);
			
			printf("\nEl resultado de la division es: fi\n",num1/num2);
		
			break;
			
		case 4:
			printf("\nIngrese el primer numero: ");
			scanf("%i",&num1);
			
			printf("\nIngrese el segundo numero: ");
			scanf("%i",&num2);
			
			printf("\nEl resultado de la multiplicacion es: %i\n",num1*num2);
		
			break;
			
		case 5:
			printf("\nIngrese el primer numero: ");
			scanf("%i",&num1);
			
			printf("\nIngrese el segundo numero: ");
			scanf("%i",&num2);
			
			
			int expo = pow(num1,num2);
			printf("\nEl resultado del numero %i elevado a la %i es: %i\n",num1,num2,expo);
		
			break;
			
		case 6:
			printf("\nIngrese un numero: ");
			scanf("%i",&num1);
			
			printf("\nEl resultado de la raiz es: %f\n",sqrt(num1));
		
			break;
			
		default:
			printf("\nSaliendo........\n");
			break;
	}
	
	system("pause");
	return 0;
}

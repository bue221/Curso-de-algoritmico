#include <stdio.h>
#include <stdlib.h>

/* run othis program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int num1, num2, num3, num4, num5,mayor = 0,menor = 1000;
	printf("Ingrese un valor numerico 1: ");	
	scanf("%i",&num1);
	
	if(num1>mayor){
		mayor = num1;
	}else if(num1<menor){
		menor = num1;
	}
	
		printf("Ingrese un valor numerico 2: ");	
	scanf("%i",&num2);
	if(num2>mayor){
		mayor = num2;
	}else if(num2<menor){
		menor = num2;
	}
	
		printf("Ingrese un valor numerico 3: ");	
	scanf("%i",&num3);
	if(num3>mayor){
		mayor = num3;
	}else if(num3<menor){
		menor = num3;
	}
	
		printf("Ingrese un valor numerico 4: ");	
	scanf("%i",&num4);
	if(num4>mayor){
		mayor = num4;
	}else if(num4<menor){
		menor = num4;
	}
	
	
		printf("Ingrese un valor numerico 5: ");	
	scanf("%i",&num5);
	if(num5>mayor){
		mayor = num5;
	}else if(num5<menor){
		menor = num5;
	}
	
	printf("El numero mayor es: %i\n",mayor);
	printf("El numero menor es: %i\n",menor);
		
	system("PAUSE");	
	return 0;
	
}

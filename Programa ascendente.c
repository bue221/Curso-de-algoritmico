#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int num1, num2, num3;
	
		printf("Ingrese el numero 1 ");
	scanf("%i",&num1);
	
		printf("Ingrese el numero 2 ");
	scanf("%i",&num2);
	
		printf("Ingrese el numero 3 ");
	scanf("%i",&num3);
	
	if(num3>num2 && num3>num1){
		
		if(num2>num1){
			
			printf("El orden es %i %i %i",num3,num2, num1 );
			
		}else{
			
			printf("El orden es %i %i %i",num3,num1, num2 );
			
		}
		
	}else if(num2>num1 && num2>num3){
		
		if(num1>num3){
			
			printf("El orden es %i %i %i",num2,num1, num3 );
			
		}else{
			
			printf("El orden es %i %i %i",num2,num3, num1 );
		
		}
	}else if(num1>num2 && num1>num3){
		
		if(num2>num3){
			
			printf("El orden es %i %i %i",num1,num2, num3 );
			
		}else{
			
			printf("El orden es %i %i %i",num1,num3, num2 );
			
		}
		
	}
	
	system("PAUSE");
	return 0;
}

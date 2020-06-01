#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
		int num1 , num2, num3;
		
		printf("Introduzca el numero 1 ");
	scanf("%i",&num1);
	
		printf("Introduzca el numero 2 ");
	scanf("%i",&num2);
	
		printf("Introduzca el numero 3 ");
	scanf("%i",&num3);
	
	if(num1<num2 && num1<num3){
		
		if(num2<num3){
			
			printf("%i",num1);
			printf("%i",num2);
			printf("%i",num3);
		
		}else{
		
			printf("%i",num1);
			printf("%i",num3);
			printf("%i",num2);
		}
		
	
	}else if(num2<num1 && num2<num3){
		
		if(num1<num3){
			
			printf("%i",num2);
			printf("%i",num1);
			printf("%i",num3);
			
		}else{
			
			printf("%i",num2);
			printf("%i",num3);
			printf("%i",num1);
		}
		
	}else if(num3<num2 && num3<num1){
		
		if(num2<num1){
			
			printf("%i",num3);
			printf("%i",num2);
			printf("%i",num1);
			
		}else{
			
			printf("%i",num3);
			printf("%i",num1);
			printf("%i",num2);
		}
		
	}
	
	system("PAUSE");
	return 0;
}

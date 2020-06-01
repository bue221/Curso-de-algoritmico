#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num1, num2, num3,num4, num5;
	
		printf("Ingrese 5 numeros \n");
	
	scanf("%i",&num1);
	scanf("%i",&num2);
	scanf("%i",&num3);
	scanf("%i",&num4);
	scanf("%i",&num5);
	
	//numero mayor
	if(num1>num2 && num1>num3 && num1>num4 && num1>num5){
		
		printf("El numero mayor es: %i " ,num1);
		
	}else if(num2>num1 && num2>num3 && num2>num4 && num2>num5){
		
		printf("El numero mayor es: %i " ,num2);
		
	}else if(num3>num1 && num3>num2 && num3>num4 && num3>num5){
		
		printf("El numero mayor es: %i " ,num3);
		
	}else if(num4>num1 && num4>num3 && num4>num2 && num4>num5){
		
		printf("El numero mayor es: %i " ,num4);
		
	}else if(num5>num1 && num5>num3 && num5>num4 && num5>num2){
		
		printf("El numero mayor es: %i " ,num5);
		
	}else if(num1==num2 && num2==num3 && num3==num4 && num4==num5){
	
		printf("Son todos iguales");
	}
	//numero menor
	
	if(num1<num2 && num1<num3 && num1<num4 && num1<num5){
		
		printf("El numero menor es: %i " ,num1);
		
	}else if(num2<num1 && num2<num3 && num2<num4 && num2<num5){
		
		printf("El numero menor es: %i " ,num2);
		
	}else if(num3<num1 && num3<num2 && num3<num4 && num3<num5){
		
		printf("El numero menor es: %i " ,num3);
		
	}else if(num4<num1 && num4<num3 && num4<num2 && num4<num5){
		
		printf("El numero menor es: %i " ,num4);
		
	}else if(num5<num1 && num5<num3 && num5<num4 && num5<num2){
		
		printf("El numero menor es: %i " ,num5);
		
	}
	
	
	system("PAUSE");
	return 0;
}

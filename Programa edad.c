#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 									
								/*Andres Camilo Plaza Edades*/
int main() 
{
	int edad;
	printf("Ingrese su edad: ");
	scanf("%i",&edad);
	if(edad>64){
		printf("Usted esta viejo \n");
	}else if(edad>17){
		printf("Usted es un adulto \n");
	}else if(edad>10){
		printf("Usted es un adolecente \n");
	}else if(edad>6){
		printf("Usted es un pre-adolecente \n");
	}else if(edad>2){
		printf("Usted es un niño \n");
	}else{
		printf("Usted es un bebe \n");
	}
	system("PAUSE");
	return 0;
}

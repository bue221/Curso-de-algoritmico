#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int factorial= 1, num, contador = 1;
	printf("Ingrese el el numero del que quiere saber el factorial: ");
	scanf("%i",&num);
	
	while(num<=0){
		printf("Error. Ingrese un numero entero del que quiere saber el factorial: ");
		scanf("%i",&num);
	}
	while(contador<=num){
		factorial= factorial * contador;
		contador = contador + 1;
	}
	
	printf("el factorial del numero %i es %i\n ",num,factorial);
	return 0;
}

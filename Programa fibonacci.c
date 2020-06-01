#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num,num1 = 0,num2=1,cont=1,fibo;
	printf("Ingrese el valor del termino que desea saber la serie de fibonacci: ");
	scanf("%i",&num);
	
	while(num<=0){
		printf("Error. Ingrese un numero entero positivo: ");
		scanf("%i",&num);
	}
	while(cont<=num){
		
		fibo = num1 + num2;
		printf("%i \n",fibo);
		num1 = num2;
		num2 = fibo;
		cont = cont +1;
	}
	printf("el valor del termino de fibonacci es  %i\n",fibo);
	system("PAUSE");
	return 0;
}

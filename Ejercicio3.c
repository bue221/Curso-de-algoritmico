#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float imc,peso,altura;
	
	printf("Ingrese su altura en centrimetros: ");
	scanf("%f",&altura);
	
	printf("Ingrese su peso en kilogramos: ");
	scanf("%f",&peso);
	
	imc = peso/((altura/100)*(altura/100));
	
	if(imc >= 18.5 && imc <= 24.9){
		printf("Su IMC es de %f indica normalidad\n",imc);
	}else if(imc>=25 && imc<=29.9){
		printf("Su IMC es de %f indica sobre peso\n",imc);
	}
	
	system("pause");
	return 0;
}

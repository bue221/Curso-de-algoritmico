#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	float nota1, nota2, nota3, total;
		
		printf("Ingrese la nota 1 , 2 y 3 \n");
	
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	scanf("%f",&nota3);
	
	nota1 = ((nota1*1.5)/5);
	nota2 = ((nota2*1.5)/5);
	nota3 = ((nota3*2)/5);
	total = (nota1+nota2+nota3);
	
	if(total>4.49){
		
		printf("Sobresaliente: %f", total);
		
	}else if(total>3.99){
		
		printf("Excelente: %f", total);
		
	}else if(total>2.99){
		
		printf("Aceptable: %f", total);
	
	}else if(total>1.99){
		
		printf("Deficiente: %f", total);
		
	}else{
		
		printf("Insuficiente: %f", total);
		
	}
	
	system("PAUSE");
	
	return 0;
}

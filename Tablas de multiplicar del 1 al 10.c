#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
						//tablas del 1 al 10
int main()
{
	int num= 1 ,i= 1,multiplicacion,numt=2;
		printf("Tablas de multiplicar del 1 al 10\n");
			printf("TABLA DEL 1\n");
	
	while(num<=10){
	
		while(i<=10){
		 
		 multiplicacion = i * num;
		 printf("%i x %i = %i\n",num,i,multiplicacion);
			 i = i +1;
		}
	printf("\n");
	printf("TABLA DEL %i\n",numt);
	numt = numt +1;
	i = i -10;
	num = num +1;
	}
	
	system("PAUSE");
	return 0;
}

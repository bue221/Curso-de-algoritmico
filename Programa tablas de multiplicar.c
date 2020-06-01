#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
						//tablas de multiplicar
int main()
{
	int num,i= 1,multiplicacion;
	printf("Ingrese el numero del que desea saber la tabla: ");
	scanf("%i",&num);

	while(i<=10){
		 
		 multiplicacion = i * num;
		 printf("%i x %i = %i\n",num,i,multiplicacion);
		 i = i +1;
		 
	}
	
	system("PAUSE");
	return 0;
}

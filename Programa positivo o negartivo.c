#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	float numero;
	printf("Ingrese un numero ");
	scanf("%f",&numero);
	if(numero>0)
	{
	  printf("El numero es positivo\n ");
	}else if(numero<0)
	{
	  printf("El numero es negativo \n ");
	}else{
	  printf("El numero es cero \n ");
	}
	system("PAUSE");
	return 0;
	
}

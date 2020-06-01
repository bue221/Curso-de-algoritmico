#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int tabla[10],x,sum,resta,mul;
	float div;
	
	for(x=0;x<10;x++){
		printf("Ingrese un numero entero: ");
		scanf("%d",&tabla[x]);
	}
	
	sum = tabla[0];
	resta = tabla[0];
	mul = tabla[0];
	div = tabla[0];
	
	for(x=1;x<10;x++){
		sum =sum + tabla[x];
		resta =resta - tabla[x];
		mul = mul * tabla[x];
		div = div/tabla[x];
	}
	
	printf("\nLa suma es %d\n\n",sum);
	printf("La resta es %d\n\n",resta);
	printf("La multiplicacion es %d\n\n",mul);
	printf("La division es %d\n\n",div);
	
	system("pause");
	return 0;
}

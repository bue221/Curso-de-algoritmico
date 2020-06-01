#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num,i=1,cuad=0,j;
	printf("Ingrese el numero hasta donde desea saber los cuadrados: ");
	scanf("%i",&num);
	
	for(j=1;j<=num;j=j+1){
		cuad = i + cuad;
		printf("El cuadrado del numero %i es %i\n",j,cuad);
		i = i +2;
	}
	
	system("pause");
	return 0;
}

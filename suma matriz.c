#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int matriz[4][3],i,j,suma=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Ingrese el valor en la posicion %i %i: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			
			printf("%i\t",matriz[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			
			suma += matriz[i][j];
			
		}
		
		printf("La suma de la fila %i es %i\n",i,suma);
		suma=0;
		
	}
	
	printf("\n");
	
	
	for(j=0;j<4;j++){
		for(i=0;i<3;i++){
			
			suma += matriz[i][j];
			
		}
		
		printf("La suma de la columna %i es %i\n",j,suma);
		suma=0;
		
	}
	
	
	
	
	system("pause");
	return 0;
}

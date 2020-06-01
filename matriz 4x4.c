#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int matriz[4][4],j,i;
	printf(" Matriz de 4 X 4 \n");
	
	//pide los datos
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			printf("Ingrese el valor en la posicion: %i,%i: ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
			
		}
		
	}
	
	//imprime el arreglo
	printf("\n arreglo \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			printf("%d ",matriz[i][j]);
			
		}
		printf("\n");
		
	}
	
	//imprime fila 3
	printf("\n fila 3 \n");
	
		for(j=0;j<4;j++){
			
			printf("%d ",matriz[2][j]);
			
		}
		printf("\n");
	
	//imprime columna 2
	printf("\n columna 2 \n");
	for(i=0;i<4;i++){
	
		printf("%d ",matriz[i][1]);
		printf("\n");
		
	}
	
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int j,i,x,y;
	
	printf("Ingrese el numero de filas: ");
	scanf("%i",&x);
	
	printf("Ingrese el numero de columnas: ");
	scanf("%i",&y);
	
	int matriz[x][y];
	
		for(i=0;i<x;i++){
			for(j=0; j<y; j=j+1){
				
				printf("Ingrese el termino %i,%i: ",j+1,i+1);
				scanf("  %i  ",&matriz[i][j]);
				
			}
		}
		for(i = 0; i<x;i++){
			for(j=0; j<y; j++){
				
				printf(" %i ",matriz[i][j]);
				
			}
			printf("\n");
		}
		
	system("pause");
	return 0;
}

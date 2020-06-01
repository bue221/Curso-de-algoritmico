#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int matriz[3][5],j,i;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			
			printf("Ingrese un numero en la posicion %i,%i: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
		
	}
	printf("Matriz normal\n");
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			
			printf("%i\t",matriz[i][j]);
			
		}
		printf("\n");
	}
	
	printf("Matriz traspuesta\n");
	for(j=0;j<5;j++){
		for(i=0;i<3;i++){
			
			printf("%i\t",matriz[i][j]);
			
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}

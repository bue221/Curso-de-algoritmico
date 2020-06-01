#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	
	int fila,columna;
	
	printf("Ingrese el numero de filas de la matriz: ");
	scanf("%d",&fila);
	
	printf("Ingrese el numero de columnas de la matriz: ");
	scanf("%d",&columna);
	
	while(fila<=1){
		printf("Dato erroneo ingrese un numero mayor a 1 en las filas: ");
		scanf("%d",&fila);
	}
	
	while(columna<=1){
		printf("Dato erroneo ingrese un numero mayor a 1 en las columnas: ");
		scanf("%d",&columna);
	}
	
	system("cls");//limpia la pantalla y el codigo
	
	int matriz[fila][columna],j,i;
	
	
	//pide los datos
	for(i=0;i<fila;i++){
		for(j=0;j<columna;j++){
			
			printf("Ingrese el valor en la posicion: %i,%i: ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
			
		}
		
	}
	
	//imprime el arreglo
	printf("\n arreglo \n");
	for(i=0;i<fila;i++){
		for(j=0;j<columna;j++){
			
			printf("%d\t ",matriz[i][j]);
			
		}
		printf("\n");
		
	}
	
	//imprime fila 3
	printf("\n fila 3 \n");
	
		for(j=0;j<columna;j++){
			if(fila>2){
			printf("%d ",matriz[2][j]);
			}else{
			printf("No existe la fila 3");
			break;
			}
		}
		printf("\n");
	
	//imprime columna 2
	printf("\n columna 2 \n");
	for(i=0;i<fila;i++){
	
		printf("%d ",matriz[i][1]);
		printf("\n");
		
	}
	
	system("pause");
	return 0;
}

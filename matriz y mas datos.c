#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int columnas,filas,i,j;
	
	//pide los valores de la matriz
	printf("Ingrese el numero de filas de la matriz: ");
	scanf("%d",&filas);
	
	printf("Ingrese el numero de columnas de la matriz: ");
	scanf("%d",&columnas);
	
	//se asegura de que se genere una matriz cuadrada
	while(filas != columnas || filas<=1 || columnas<=1){
		system("cls");
		printf("Reingrese el numero de filas y de columnas de manera que sean\niguales para generar una matriz cuadrada \n");
		
			printf("Ingrese el numero de filas de la matriz: ");
			scanf("%d",&filas);
	
			printf("Ingrese el numero de columnas de la matriz: ");
			scanf("%d",&columnas);
		
	}
	
	int matriz[filas][columnas];
	system("cls");
	
	//pide datos
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Ingrese el coeficiente en la posicion %i, %i: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	printf("\nMatriz %iX%i\n",filas,columnas);
	//imprime datos
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nDiagonal principal\n");
	//imprime la diagonal principal
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			if(i==j){
				printf("%d",matriz[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
	
	printf("\nDiagonal secundaria\n");
	//imprime la diagonal secundaria
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			
			if((i+j)==(filas-1) && (columnas-1)==(i+j)){
				printf("%d",matriz[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
		
	
	printf("\nMatriz traspuesta\n");
	//imprime la matriz traspuesta
	for(j=0;j<columnas;j++){
		for(i=0;i<filas;i++){
				printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	system("pause");	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int estudiantes,codEs,numMaterias,codMateria,numCreditos,total,prom,j,i,prom2,num,total2;
	char nombre[40],nombreMateria[40];
	
	printf("Ingrese el numero de estudiantes que van a ingresar la informacion: ");
	scanf("%i",&estudiantes);
	
	for( i = 1; i<=estudiantes;i++){
		printf("\n			REGISTRO IDENTIFICADOR\n		");
		printf(" \n");
		
		printf("Ingrese su codigo de estudiante: ");
		scanf("%i",&codEs);

		printf("\nIngrese su nombre:(Por ejemplo Andres_camilo_plaza_Jimenez) ");
		scanf("%s",nombre);
		
		printf("\nIngrese el numero de materias cursadas: ");
		scanf("%i",&numMaterias);		
		
			for( j = 1; j<=numMaterias;j++){
				printf("\n  	REGISTRO DE MATERIAS\n		");
				printf(" \n");
			
				printf("Ingrese su codigo de la materia: ");
				scanf("%i",&codMateria);

				printf("\nIngrese su nombre:(Por ejemplo Pensamiento_Algoritmico) ");
				scanf("%s",nombreMateria);
		
				printf("\nIngrese el numero de creditos: ");
				scanf("%i",&numCreditos);		
				total = total+ numCreditos;
				prom = total/numMaterias;
				printf("El estudiante %s \n ",nombre);
				printf("Cursa la materia %s con el codigo %i y la cual tiene %i creditos\n",nombreMateria,codMateria,numCreditos);
			}
			printf("\n			Total de creditos del estudiante y promedio de creditos				\n");
			printf("El numero total de creditos es\n %i ",total);
			printf("El promedio de los creditos totales es %i\n",prom);
			num = prom;
			total2 = num + total2;
			
		}
		prom2 = total2/estudiantes;
		printf("El promedio ponderado total de los %i estudiantes es %i\n",estudiantes,prom2);	
	
	
	system("pause");
	return 0;
}

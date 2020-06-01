#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int i;
	printf("Introduzca un numero del 1 al 7: ");
	scanf("%i",&i);
	
	switch (i){
	
	
	case 1:
		printf("Lunes \n");
		break;
		
	case 2:
		printf("Martes \n");
		break;
		
	case 3:
		printf("Miercoles \n");
		break;
		
	case 4:
		printf("Jueves \n");
		break;	
		
	case 5:
		printf("Viernes \n");
		break;
		
	case 6:
		printf("Sabado \n");
		break;
		
	case 7:
		printf("Domingo \n");
		break;
		
	default:
		printf("Error \n");
		break;
	}
	system("pause")	;
	return 0;
}

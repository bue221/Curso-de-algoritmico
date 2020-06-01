#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	float radio,area, perimetro;
	printf("\n Introduzca el radio: ");
	scanf("%f",&radio);
	area = 3.1416 * (radio*radio);
	
	perimetro = (2*(3.1416))*radio;
	printf("\n El area es: %.2f ",area);
	printf("\n El perimetro es: %.2f ",perimetro);
	system("PAUSE");
	return 0;
}

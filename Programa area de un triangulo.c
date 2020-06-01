#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
								/*Area de un triangulo*/
int main() 
{
	
	float base, altura, area;
	printf("Ingrese la base del triangulo  ");
	scanf("%f",&base);
	printf("Ingrese la altura del triangulo  ");
	scanf("%f",&altura);
	area = (base*altura)/2;
	printf("El area del triangulo es: %.2f",area);
	system("PAUSE");
	return 0;
}

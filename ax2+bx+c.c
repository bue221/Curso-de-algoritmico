#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b,c,raiz,x1,x2,raiz1,raiz2;
	printf("*Calcula la expresion segundo grado (ax2+bx+c)*\n\n");
	
	printf("Escribe el valor de a: ");
	scanf("%d",&a);
	printf("Escribe el valor de b: ");
	scanf("%d",&b);
	printf("Escribe el valor de c: ");
	scanf("%d",&c);
	
	raiz = sqrt((pow(b,2)-4*a*c));
	if(raiz>=0){
		raiz1 = ((-b+sqrt(pow(b,2)-4*a*c))/(2*a));
		raiz2 = ((-b-sqrt(b*b-4*a*c))/(2*a));
		printf("Su raiz es %d/n",raiz1);
		printf("Su raiz es %d", raiz2);
	}else{
		x1= -b/(2.0*a);
		x2= sqrt(-raiz)/(2*a);
		printf("%f+%fi",x1,x2);
		printf("%f-%fi",x1,x2);
	}
	system("pause");
	return 0;
}

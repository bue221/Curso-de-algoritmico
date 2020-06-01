#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
		int op,num,i;
	printf("ingrese hasta que numero desea conocer el cubo: ");
	scanf("%i",&num);
	
	for(i=1;i<=num;i++){
		op= pow(i,3);
		printf("%i\n",op);
	}
	
	return 0;
}

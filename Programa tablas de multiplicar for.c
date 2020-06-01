#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{

	int num,i;
	
	printf("Ingrese La tabla que desea saber: ");
	scanf("%i",&num);
		printf("TABLA DEL %i\n",num);
	
	for(i=1;i<=10;i++){
		
		int mul = i * num;
		printf("%i X %i = %i \n",num,i,mul);
	
	}
	
	system("PAUSE");
	return 0;
}

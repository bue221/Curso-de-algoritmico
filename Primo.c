#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int num;
	
	printf("Ingrese un numero: ");
	scanf("%i",&num);
	
	if(num==1){
			printf("El numero %i no es primo\n",num);
			
	}else if(num % 3 !=0 && num % 2 !=0 && num%5 !=0 && num%7 !=0 || num==2 || num == 3){
			printf("El numero %i es primo \n",num);

	}else{
			printf("El numero %i no es primo\n",num);
	}

	
	system("pause");
	return 0;
}

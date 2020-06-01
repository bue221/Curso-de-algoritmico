#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num,i,total,div;
	
	printf("Ingrese Un numero: ");
	scanf("%i",&num);
	
	for(i =1;i<=num;i++){
		
		div = i % 2;
		if(div != 0){
			total =total+i;
		}
	}
	printf("%i\n",total-1);
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{

	int i,j,num;
	
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			int mul = i * j;
			printf("%i X %i = %i \n",i,j,mul);
		}
	
		printf("TABLA DEL %i\n",num);
		num = num + 1;
		printf("\n");
	}
	
	
	system("PAUSE");
	return 0;
}

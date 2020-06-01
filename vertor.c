#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int vector[1000];
	int i = 0;
	
	
	for(i=0;i<=1000;i++){//vector [0] = 0
		
		vector[i] = i;
		
		
	}
	
	for(i=0;i<=1000;i++){
		
	printf("%i\n",vector[i]);
		
	}
	
	system("pause");
	return 0;
}

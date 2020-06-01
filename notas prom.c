#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int tam=0;
	printf ("digite la cantidad de estudiantes: ");
	scanf ("%d",&tam);
	while (tam<=0)
	{
		printf ("digite nuevamente: ");
		scanf ("%d",&tam);
	}
	int codigo[tam],i,j,k;
	float notas[tam][3],def[tam],promfinal=0;
	char nom[tam][10];
	for (i=0;i<tam;i++)
	{
		printf ("digite su codigo: ");
		scanf ("%d",&codigo[i]);
		printf ("\nDigite su nombre: ");
		scanf ("%s",nom[i]);
		for (j=0;j<3;j++)
		{
			printf ("digite la nota del corte %d: ",j+1);
			scanf ("%f",&notas[i][j]);
		}
		system("cls");
	}
	for (i=0;i<tam;i++)
	{
		def[i]=(notas[i][0]*0.3)+(notas[i][1]*0.3)+(notas[i][2]*0.4);
	}
	printf ("codigo nombre  n1  n2  n3    definitiva\n");
	for (i=0;i<tam;i++)
	{
		printf ("%d  ",codigo[i]);
		printf ("%s  ",nom[i]);
		for (j=0;j<3;j++)
		{
			printf ("%.1f ",notas[i][j]);
		}
		printf ("     %.1f\n",def[i]);
		promfinal=promfinal+def[i];
	}
	float promc1=0,promc2=0,promc3=0;
	for (j=0;j<3;j++)
	{
		for (i=0;i<tam;i++)
		{
			if (j==0)
			{
				promc1=promc1+notas[i][j];
			}
			else
			{
				if(j==1)
				{
					promc2=promc2+notas[i][j];
				}
				else
				{
					promc3=promc3+notas[i][j];
				}
			}
		}
	}
	printf ("\n\nEl promedio del primer corte fue: %.1f",(promc1/tam));
	printf ("\n\mEl promedio del segundo corte fue: %.1f",(promc2/tam));
	printf ("\n\nEl promedio del tercer corte fue: %.1f",(promc3/tam));
	printf ("\n\nEl promedio de la nota final fue: %.1f\n\n",(promfinal/tam));
	
	
	system("pause");
	return 0;
}

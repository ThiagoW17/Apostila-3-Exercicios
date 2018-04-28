#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int x = 0,
		y = 0,
		resultado = 0;
		
		
	setlocale(LC_ALL,"");

		printf("\n\n");
		
		for(x=1;x<=10;x++)
		{
			for(y=1;y<=10;y++)
			{
				resultado = x * y;
				printf("%d * % d = %d\n",x,y,resultado);
			}
			printf("\nA tabuada é: \n",x,y,resultado);
		}
		
	system("pause");
	return 0;
}

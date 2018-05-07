#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int     numero   = 0,
		contador1 = 0,
		contador2 = 0;
	
	{


		printf("Digite a quantidade de asteriscos: ");
		scanf("%d",&numero);
		
		for(contador1=1;contador1<=numero;contador1++)
		{
			for(contador2=1;contador2<=contador1;contador2++)	
			{
				printf("*");
			}
			printf("\n");
		}

	}
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int numero   = 0,
		digitado = 0,
		contador = 0,
		linha    = 1,
		mostrados = 0;

	{
		linha = 1;
		mostrados = 0;


		printf("Digite um numero: ");
		scanf("%d",&digitado);
		
		for(numero=1;numero<=digitado;numero++)
		{
				printf("%d",numero);
				mostrados = mostrados + 1;
				if(mostrados==linha)
				{
					printf("\n");
					linha++;		
					mostrados = 0;
				}
		}

	}
	system("pause");
	return 0;
}

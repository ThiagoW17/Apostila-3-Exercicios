#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int numero   = 0,
		digitado = 0,
		contador = 0,
		linha    = 1,
		mostrados = 0;
		
	char continuar;
		
	setlocale(LC_ALL,"");

	{
		system("cls");
		linha = 1;
		mostrados = 0;


		printf("Digite um número: ");
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

		continuar = getch(); 
	}
	system("cls");
	system("pause");
	return 0;
}

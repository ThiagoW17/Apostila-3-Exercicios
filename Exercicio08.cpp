#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int soma     = 0,
		numero   = 0,
		contador = 0;
		
	char continuar;
		
	setlocale(LC_ALL,"");

	{
		system("cls");
		soma = 0;
		
        for(contador=1;contador<=10;contador++)
			{
				printf("Digite os dez n�meros a seguir: ",contador,contador);
				scanf("%d",&numero);
				
				soma = soma + numero;
				
			}		
		
		printf(" A soma dos dez n�meros � de = %d",soma);		

		continuar = getch(); 
	}
	system("cls");
	system("pause");
	return 0;
}

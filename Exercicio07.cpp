#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int soma = 0,
		num1   = 0,
		num2   = 0;
		
	char continuar;
		
	setlocale(LC_ALL,"");
	
	{
		system("cls");
		
		printf("Digite o primeiro número: ");
		scanf("%d",&num1);

		printf("Digite o segundo número: ");
		scanf("%d",&num2);
		
		soma = ((num2-num1+1)*(num1+num2))/2;
		
		printf("A soma dos numeros é de = %d",soma);		

		continuar = getch(); 
	}
	system("cls");
	system("pause");
	return 0;
}

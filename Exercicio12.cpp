#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>


int main ()
{
	int contador  = 0,
		novo_texto = 0,
		len_frase = 0;
		
	char continuar,
		 frase[101],
		 nova_frase[101];
		
	setlocale(LC_ALL,"");

	{
		system("cls");
		
		printf("Digite uma frase: ");
		fgets(frase,sizeof(frase),stdin);
		
        len_frase = strlen(frase);

        if (frase[len_frase - 1] == '\n')
	    {
     		frase[--len_frase] = 0;	
    	}	
		printf("\n\n");
		
		
		novo_texto = 0;
		for(contador=0;contador<=len_frase;contador++)
		{
         if(frase[contador]!=' ')
         {
           nova_frase[novo_texto]=frase[contador];
           novo_texto++;
         }
		}
		
		printf("A nova frase é: %s",nova_frase);

		continuar = getch(); 
	}
	system("cls");
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int main ()
{
	int palavras         = 0,
	    palavra_contada  = 0,
		posicao          = 0,
		total_caracteres = 0;
		
	char continuar,
		 texto[101];
		
	setlocale(LC_ALL,"");
	
	{
		system("cls");
		
		strcpy(texto,"");
		palavras = 0;
		palavra_contada = 0;
		
		printf("Digite a frase: ");
		fgets(texto,sizeof(texto),stdin);
        total_caracteres = strlen(texto);

        if (texto[total_caracteres - 1] == '\n')
	    {
     		texto[--total_caracteres] = 0;	
    	}	
		
		printf("\n");
		
		for(posicao=0;posicao<total_caracteres;posicao++)
		{
			if(texto[posicao]!=' ')
			{
		            if(palavra_contada==0)
	                {
		                    palavras++;
		                    palavra_contada=1;
			        }
			}
			else
			{
			 	palavra_contada=0;
	 	    }
		}
		



		printf("Total de Palavras = %d\n",palavras);

		continuar = getch(); 
	}
	system("cls");
	system("pause");
	return 0;
}

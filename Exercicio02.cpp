#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int main ()
{
	int ansi_case        = 0,
		len              = 0,
		total_caracteres = 0,
		posicao          = 0;
		
	char continuar,
		 texto[101];
		
	setlocale(LC_ALL,"");
	
	{
		system("cls");
		
		strcpy(texto,"");
		
		printf("Digite uma palavra frase: ");
		fgets(texto,sizeof(texto),stdin);
        total_caracteres = strlen(texto);


        if (texto[total_caracteres - 1] == '\n')
	    {
     		texto[--total_caracteres] = 0;	
    	}	
		
		printf("\n");
		
		ansi_case = 1;
		
		for(posicao=0;posicao<total_caracteres;posicao++)
		{
			if((texto[posicao]>='a' && texto[posicao]<='z')||(texto[posicao]>='A' && texto[posicao]<='Z'))
			{
   				if(ansi_case==1)
				{
					if(texto[posicao]>='a' && texto[posicao]<='z')
					{
						texto[posicao]=texto[posicao]-32;
					}
				    ansi_case=0;
				}
				else
				{
					if(texto[posicao]>='A' && texto[posicao]<='Z')
					{
						texto[posicao]=texto[posicao]+32;
					}
					ansi_case=1;
				}
			}
		}
		



		printf("A nova frase é= %s\n",texto);

		continuar = getch(); 
	}
	system("cls");
	system("pause");
	return 0;
}

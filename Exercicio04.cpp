#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int main ()
{
	int len_texto        = 0,
	    palavras         = 0,
		len_palavra      = 0,
		i = 0, 
		y = 0, 
		todas_iguais = 0,
		resultado = 0;
		
	char continuar,
		 texto[101],
		 palavra[101];
		
	setlocale(LC_ALL,"");

	{
		system("cls");
		
		strcpy(texto,"");
		
		printf("Digite uma frase: ");
		fgets(texto,sizeof(texto),stdin);
		
        len_texto = strlen(texto);

        if (texto[len_texto - 1] == '\n')
	    {
     		texto[--len_texto] = 0;	
    	}	

		
		printf("Procurar pela palavra:  ");
		fgets(palavra,sizeof(palavra),stdin);
		
        len_palavra = strlen(palavra);

        if (palavra[len_palavra - 1] == '\n')
	    {
     		palavra[--len_palavra] = 0;	
    	}	
		
		resultado    = 0;
		todas_iguais = 0;

		for(i=0;i<len_texto;i++)
		{
			if(texto[i]==palavra[0])
			{
				todas_iguais = 1;
				for(y=0;y<len_palavra;y++)
				{
					if(texto[i+y]!=palavra[y]){todas_iguais=0;}
				}	
			}
			if(todas_iguais==1){i=len_texto;resultado=1;}
		 }

		if(resultado==1)
		{
		 	printf("A palavra \"%s\" foi encontrada.",palavra);
		}		
		else
		{
		 	printf("A palavra \"%s\" não foi encontrada.",palavra);
		}

		continuar = getch(); 
	}
	system("cls");
	system("pause");
	return 0;
}

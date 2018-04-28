#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int main ()
{
	int total_caracteres = 0,
		total_vogais     = 0,
		total_letras     = 0,
		total_consoantes = 0,
		total_numeros    = 0,
		total_especial   = 0,
		len              = 0,
		posicao          = 0;
		
	char continuar,
		 texto[101];
		
	setlocale(LC_ALL,"");
	
    system("cls");
    {
	
		
		total_caracteres = 0;
		total_vogais     = 0;
		total_letras     = 0;
		total_consoantes = 0;
		total_numeros    = 0;
		total_especial   = 0;
		len              = 0;
		posicao          = 0;
		
		strcpy(texto,"");
		
		printf("Digite uma frase:  ");
		fgets(texto,sizeof(texto),stdin);
        total_caracteres = strlen(texto);

        if (texto[total_caracteres - 1] == '\n')
	    {
     		texto[--total_caracteres] = 0;	
    	}	
		
		printf("\n");
		
		for(posicao=0;posicao<total_caracteres;posicao++)
		{
			if((texto[posicao]>='a' && texto[posicao]<='z')||(texto[posicao]>='A' && texto[posicao]<='Z'))
			{
				total_letras++;
				if(texto[posicao]=='a' || texto[posicao]=='A' ||texto[posicao]=='e' ||texto[posicao]=='E' ||texto[posicao]=='i' || texto[posicao]=='I' || texto[posicao]=='o' || texto[posicao]=='O' || texto[posicao]=='u' || texto[posicao]=='U')
				{
					total_vogais++;
				}
				else
				{
					total_consoantes++;
				}
			}
			else
			{
				if(texto[posicao]>='0' && texto[posicao]<='9')
				{
					total_numeros++;
				}
				else
				{
					total_especial++;
				}
			}
		}
		



		printf("a. Total de caracteres = %d\n",total_caracteres);
		printf("b. Total de vogais     = %d\n",total_vogais);
		printf("c. Total de letras     = %d\n",total_letras);
		printf("d. Total de consoantes = %d\n",total_consoantes);
		printf("e. Total de numeros    = %d\n",total_numeros);
		printf("f. Total de especiais  = %d\n",total_especial);

		continuar = getch(); 
	}
	system("cls");
	system("pause");
	return 0;
}

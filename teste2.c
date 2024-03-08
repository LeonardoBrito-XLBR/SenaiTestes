#include <stdio.h>
#include <locale.h>

	int main (){
		setlocale (LC_ALL,"");
		
		float nota, soma = 0, media;//NUMERO
		char contador = 0, confirmacao; 
		
		
	
		
			
				
			do{
				fflush(stdin);
				printf ("Deseja mais uma nota?");
				scanf ("%c", &confirmacao);
				
				confirmacao = toupper (confirmacao);
				
				if (confirmacao != 'N'){
				
				printf ("Digite sua nota:  ");
				scanf ("%f", &nota);
				
				soma = soma + nota;
				contador = contador + 1;
				}
				
			}while (confirmacao != 'N');
	
		    media = soma / contador;
		
	
		printf ("A sua media foi: %1.f", media);
		return 0;
		
	}

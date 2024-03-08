#include <stdio.h>
#include <locale.h>

	int main (){
		setlocale (LC_ALL,"");
		
		float nota, soma = 0, media;//NUMERO
		char contador = 0, confirmacao; 
		
			
			do{	
				printf ("Deseja mais uma nota? (Responda com 'S' ou 'N') ");
				scanf ("%c", &confirmacao);
				contador = contador + 1;
				
				printf ("Digite a nota: ");
				scanf ("%f", &nota);
				
				fflush(stdin);
			
				
			}while (confirmacao == 'S');
		
		
			soma = soma + nota;
	
		    media = soma / contador;
		
	
		printf ("A sua media foi: %1.f", media);
		return 0;
		
	}

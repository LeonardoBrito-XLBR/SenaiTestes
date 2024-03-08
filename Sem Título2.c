#include <stdio.h>
#include <locale.h>

	int main (){
		setlocale (LC_ALL,"");
		
		float nota;
		int vezes; 
	
			printf ("Sistema de notas\n");
			
		do{
		
			vezes = vezes + 1;
			
			printf ("\nDigite a sua nota: ");
			scanf ("%f", &nota);
			fflush (stdin);
	
		} while (nota < 0 || nota > 10);
		
		printf ("O sistema repetiu %i vezes -_-", vezes); 
		printf ("Nota informada foi: %f", nota);
	}

#include <stdio.h>
#include <locale.h>

	int main (){
		setlocale (LC_ALL,"");
		
		float nota;
		int vezes; 
	
			printf ("Sistema de notas\n"); //INTRODUÇÃO
			
		do{
		
			vezes = vezes + 1; //SÓ PARA CONTAR AS VEZES
			
			printf ("\nDigite a sua nota: ");
			scanf ("%f", &nota);
			fflush (stdin);
			
			if (nota < 0 || nota > 10){
				printf ("\nNota ERRADA AMIGO");
			}
			
		} while (nota < 0 || nota > 10);
		
		printf ("\n\nO sistema repetiu %i vezes -_-", vezes);  //SO PARA MOSTRA AS VEZES
		printf ("\nNota informada foi: %1.f", nota);
	}

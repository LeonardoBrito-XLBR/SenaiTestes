#include <stdio.h>
#include <locale.h>

	int main (){
		
		int contador = 0;
		char continuar; 
		
		do{
			
			printf ("Repetindo...\n");
			
			contador = contador + 1;
			
			printf ("Tecle 's' se deseja continuar\n");
			scanf("%c", &continuar);
			fflush (stdin);
			
		} while (continuar == 's');
		
		printf ("O bloco foi repetido %d vezes", contador);
		
		return 0;
		
	}

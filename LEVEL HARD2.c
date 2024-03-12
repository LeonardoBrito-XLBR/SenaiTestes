#include <stdio.h>


int main (){
	
	int num, contador=0, soma=0; 
	float media;
	
	
		printf ("Digite o seu numero: ");
		scanf ("%i", &num);
	
		while (num >= 0){
			printf ("Digite o numero: ");
			scanf ("%i", &num);
					
			if (num >= 0){
				soma = soma + num;
				contador = contador +1;
				}
		
			}	
		
 			if (contador == 0){
 				printf ("\nNao foi possivel achar.");
			 } else {
			 	media = soma / contador;
			 }
 	 		

 	
 			printf ("\nA sua media foi: %.1f", media );
 			printf ("\nQuantidade: %i", contador);

}

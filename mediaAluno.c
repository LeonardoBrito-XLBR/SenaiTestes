#include <stdio.h>

	int main (){

		
		float nota1, nota2, media;
		
		//La�o da primeira nota
		do{
			printf ("\nDigite a sua 1� nota: ");
			scanf ("%f", &nota1);
			
			// SE ELAS S�O VALIDAS
			if (nota1 < 0 || nota1 > 10){
				printf ("\nNota Invalida");
			}
			
		} while (nota1 < 0 || nota1 > 10);
		
		//LA�O DA SEGUNDA NOTA
		 
		 do {
		 	printf ("\nDigite a sua 2� nota: ");
		 	scanf ("%f", &nota2);
				
				//SE ELAS S�O VALIDAS	
			if (nota2 < 0 || nota2 > 10){
				printf ("\nNota Invalida");
			}
			
		 	
		 } while (nota2 < 0 || nota2 > 10);
		 
		 //CALCULO FINAL
		 media = (nota1 + nota2) / 2;
			
		printf ("A sua media foi %1.f", media);
				
}

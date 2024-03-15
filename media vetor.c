#include <stdio.h>


int main (){
	
	float notas [3], media;
	int i, soma = 0;
	
	printf ("Digite as notas\n");
	
	for (i =0; i <3; i++){
	
		printf ("\nDigite a %i nota : ", i+1);
		scanf ("%f", &notas[i]);
		soma += notas[i];
		
	}
		

	

	media = soma / i;
	
	
	printf ("\n Media total: %.1f ", media);
	
}

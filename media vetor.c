#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float notas [3], media;
	int i, soma;
	
	printf ("Digite as notas\n");
	
	for (i =0; i <3; i++){
	
		printf ("\nDigite a %i nota : ", i+1);
		scanf ("%f", &notas[i]);
	}
		

	
	soma += notas;
	media = soma / 3;
	
	
	printf ("\n%d Media total: %.1f ", media);
	
}

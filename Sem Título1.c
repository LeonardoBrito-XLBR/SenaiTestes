#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 4

int main (){
	
	char situ [2000];
	float notas [4], media;
	int i, soma = 0;
	
	printf ("===== SISTEMAS DE NOTAS ===== \n");
	
	for (i =0; i <4; i++){
	
		printf ("Digite a %i nota : ", i+1);
		scanf ("%f", &notas[i]);
		soma = soma + notas[i];
	}
		media = soma / i;
		
		system ("cls || clear");
		sleep (2);
		
	if (media >= 7) {
		 strcpy ( situ, "APROVADO");
		
	} else if (media >= 5) {
		strcpy ( situ, "RECUPERAÇÂO");
		
	} else if (media < 5){
		strcpy ( situ, "REPROVADO");
	}
	
	
	
	printf ("Voce esta: %s", situ );
	printf ("\n Media total: %.1f ", media);
	
}

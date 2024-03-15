#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	
	float notas [4], media;
	int i, soma = 0;
	
	printf ("=== SISTEMA DE MEDIA ===\n\n");
	
	for (i =0; i <4; i++){
	
		printf ("Digite a %i nota : ", i+1);
		scanf ("%f", &notas[i]);
		soma = soma + notas[i];
	}
	
	system ("cls || clear");
	
	printf ("===== EXIBINDO OS SEUS DADOS =====");
		for (i =0; i <5; i++){
			printf ("%i nota: %1.f\n", i, notas [i]);
	}

	
	media = soma / 	i;
	
	
	printf ("\n Media total: %.1f ", media);
	
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int vetor [5];
	int i;
	
	printf ("Digite os elementos dos vator:\n");
	
	for (i =0; i<5; i++){
		printf ("Elemento %d: ", i+1);
		scanf ("%d", &vetor[i]);
	}
	
	sleep (3);
	system ("cls || clear");
	
	for (i = 0; i<5; i++){
		printf ("Elemento %d: %d\n", i+1, vetor[i]);
	}
}

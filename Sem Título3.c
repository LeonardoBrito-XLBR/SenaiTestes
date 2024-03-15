#include <stdio.h>
#include <locale.h>
#include <limits.h>
#define tamanho 2 

int main (){
	setlocale (LC_ALL, "portuguese");
	
	int vetor [tamanho], maior = INT_MIN, menor = INT_MAX;
	int i;
	
	
	printf ("ISSO É UMA LOGO :) IGNORE\n");
	
	for (i = 0; i < tamanho; i++){
		printf ("Digite o %iº numero: ", i +1);
		scanf ("%i", &vetor[i]);
	
		if (vetor[i] < menor){	
	 		menor = vetor[i];
		}
	
		if (vetor[i] > maior) {
	 		maior = vetor [i];
		}
	}
	 
	 printf ("\nO maior numero: %i", maior);
	 printf ("\nO menor numero: %i", menor);
}

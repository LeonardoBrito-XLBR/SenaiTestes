#include <stdio.h>
#include <locale.h>

#define tamanho 6

int main (){
	setlocale (LC_ALL, "portuguese");
	
	int vetor [tamanho], par = 0, impar= 0;
	int i;
	
	
	printf ("ISSO É UMA LOGO :) IGNORE\n");
	
	for (i = 0; i < tamanho; i++){
		printf ("Digite o %iº numero: ", i +1);
		scanf ("%i", &vetor[i]);
	
	 
		if (vetor[i] % 2 == 0){	
	 		par += 1;
		}else{
			impar+=1;
		}
	}
		
	 printf ("\nOs numeros pares: %i", par);
	 printf ("\nOs numeros impares: %i", impar);
}

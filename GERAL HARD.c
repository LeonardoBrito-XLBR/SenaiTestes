#include <stdio.h>


int main (){

	int numero=1, soma= 0, somaGeral = 0, somaPares = 0;
	int contador=0, pares=0, impares =0;
	float mediaPar, mediaGeral; 
		
		
	while (numero != 0) {
		printf ("Digite o seu numero: ");
		scanf ("%i", &numero);
		
		if (numero > 0 ) {
			
			if (numero %2 == 0){
				pares++;
				somaPares = somaPares + numero;
			} else {
				impares ++;
			}
			
			somaGeral = somaGeral + numero;
			contador++; 
		}
		
			if (numero %2 ==0) {
				pares = pares +1;
				mediaPar = numero /2;
			} 
			
			
			contador = contador + 1;
	}
	
	if (contador ==0){
		printf ("Nao foi possivel numero positivo ");
		
	}else {
		mediaPar = somaPares / 2;
		mediaGeral = somaGeral /contador;
	}


	printf ("Quatidade de pares %i \n", pares);
	printf ("Quatidade de impares %i \n", impares);
	printf ("Media dos pares %1.f \n", mediaPar);
	printf ("Media geral %1.f \n",mediaGeral);
	
	return 0;
}
	

#include <stdio.h>
#include <locale.h>
#define quant 5

int main() {
    setlocale(LC_ALL, "portuguese");

    int i, num, numero[quant];
    int parImpar = 0,  positiveNegative= 0, maiorNum = 9999, menorNum;

	//ATIVANDO A REPETIÇÃO DA PERGUNTA
	for (i=0; i < quant; i++) {
		printf ("Digite o %iª número: ", i+1);
        scanf("%i", &numero[i]);
        
        //VERIFICANDO OS NUMEROS PARES E IMPARES
        if (numero[i] %2 == 0 && numero[i] %2 != 0) {
        	parImpar += 1;
		}
         
         //VERIFICANDO OS NUMEROS POSITIVO E NEGATIVO
        if (numero[i] > 0 && numero[i] < 0) {
            positiveNegative +=1; 
        }
        
     	//QUANTIDADE DE NUMEROS
        num += 1;
		
		//VERIFICANDO O MAIOR NUMERO
		if (numero[i] > maiorNum){
			numero[i] = maiorNum;
		}

		//VERIFICANDO O MENOR NUMERO
		if (numero[i] < menorNum ){
			 numero[i] = menorNum;
		}
} while (numero != 0);
    	
    	for (i = quant - 1; i>= 0; i--){
    		printf ("O Elemento Inverso %iª foi o: %d ", i, numero[i]);
		}
    printf("\nQuantidade de números pares: %i", parImpar);
    printf("\nQuantidade de números positivos: %i", positiveNegative);
    printf("\nQuantidade de números inseridos: %i\n", num);

    return 0;
}

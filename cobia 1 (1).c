#include <stdio.h>

	int main (){
		//1� PRIMEIRA LINHA ---- 2� SEGUNDO COLUNA
		int numeros[2][2];
		int i, j; //Lagura e Coluna
		
		printf ("Digite os elementos para matriz:\n");
		
		//COLETAR OS DADOS EM MATRIZES
		for (i = 0; i < 2; i++){
			for (j = 0; j < 2; j++){
				printf ("Elemento da linha %d coluna %d: ", i+1, j+1);
				scanf ("%d", &numeros[i][j]);
			}
		}
		
		printf ("\n\n===== EXIBINDO OS NUMEROS =====\n");
		
		for ( i = 0; i < 2; i++){
			for (j = 0; j < 2; j++){
				printf ("Elemento da linha %d coluna %d: %d \n", i + 1, j + 1, numeros[i][j]);
			}
		}
	}

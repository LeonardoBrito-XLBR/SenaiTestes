#include <stdio.h>
#include <locale.h>

	int main (){
		setlocale(LC_ALL,"");
		
		//1º PRIMEiRA LINHA ---- 2º SEGUNDO COLUNA
		char disciplina[3][200];
		float notas[3][2];
		float media [3];
		float soma =0;
		int i, j; 
		
		for (i= 0; i < 3; i++){
			printf ("Digite o nome da disciplina: ");
			scanf("%s", &disciplina[i]);
			
			for (j = 0; j < 2; j ++){
				printf ("Digite a %iª nota: ", j+1);
				scanf ("%f", &notas[i][j]);
				
				soma += notas[i][j];
		
			}
			
			media[i]=soma/j;
			soma = 0;
			printf ("\n"); //PAUSA
		}
		
		printf ("\n=========================");
		for ( i= 0; i <3; i++){
			printf ("\n%s \n", disciplina[i]);
			
			for ( j= 0; j <2; j++){
				printf ("nota: %1.f \n", notas[i][j]);
			}
			printf ("A media foi: %1.f", media[i]);
			printf("\n");
		}
		
		 
	}

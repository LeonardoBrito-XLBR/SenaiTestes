#include <stdio.h>
#include <locale.h>

	int main (){
		setlocale(LC_ALL,"");
		
		//1º PRIME]~,~´~IRA LINHA ---- 2º SEGUNDO COLUNA
		char nome[2][200];
		float notas[2][3];
		int i, j; 
		
		for (i= 0; i < 2; i++){
			printf ("Digite o nome do %i aluno: ", i+1);
			scanf("%s", &nome[i]);
			
			for (j = 0; j < 3; j ++){
				printf ("Digite a %iª nota: ", j+1);
				scanf ("%f", &notas[i][j]);
			}
			
			printf ("\n"); //PAUSA
		}
		
		printf ("\n=========================");
		for ( i= 0; i <2; i++){
			printf ("%iª Aluno: %s \n", i+1, nome[i]);
			
			for ( j= 0; j <3; j++){
				printf ("%iª nota: %1.f \n", j+1, notas[i][j]);
			}
		}
		
	}

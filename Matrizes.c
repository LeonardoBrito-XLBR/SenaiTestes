#include <stdio.h>
#include <locale.h>

	int main (){
		setlocale(LC_ALL,"");
		
		//1º PRIME]~,~´~IRA LINHA ---- 2º SEGUNDO COLUNA
		char nome[4][200];
		float notas[4][3];
		int i, j;
		float media[2];
		int soma = 0; 
		
		//QUANTIDADE DE ALUNO
		for (i= 0; i < 4; i++){
			printf ("Digite o nome do %i aluno: ", i+1);
			scanf("%s", &nome[i]);
			
			//QUANTIDADE DE NOTAS DOS SEUS ALUNOS
			for (j = 0; j < 3; j ++){
				printf ("Digite a %iª nota: ", j+1);
				scanf ("%f", &notas[i][j]);
				
				soma += notas[i][j];
				
			}
			
			//ARMAZENANDO E CALCULANDO ANTES DE REPETIR
			media [i] = soma /j;
			soma = 0;
			
			printf ("\n"); //pular linha
		}
		
		printf ("\n=========================\n");
		
		//EXIBINDO OS NOMES DO ALUNO EM REPETIÇÃO
		for ( i= 0; i <4; i++){
			printf ("%iª Aluno: %s \n", i+1, nome[i]);
			
			//EXIBINDO AS NOTAS COM  BASE DO NOME DO ALUNO
			for ( j= 0; j <3; j++){
				printf ("%iª nota: %1.f \n", j+1, notas[i][j]);
					
			}
			//EXIBINDO A MEDIA REPETIÇÃO DOS ALUNOS
			printf ("Média: %1.f\n", media[i]);
			
			printf ("\n");
		}
		
	}

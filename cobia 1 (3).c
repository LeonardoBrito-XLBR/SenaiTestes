#include <stdio.h>
#include <locale.h>

	int main (){
		setlocale(LC_ALL,"");
		
		//1� PRIME]~,~�~IRA LINHA ---- 2� SEGUNDO COLUNA
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
				printf ("Digite a %i� nota: ", j+1);
				scanf ("%f", &notas[i][j]);
				
				soma += notas[i][j];
				
			}
			
			//ARMAZENANDO E CALCULANDO ANTES DE REPETIR
			media [i] = soma /j;
			soma = 0;
			
			printf ("\n"); //pular linha
		}
		
		printf ("\n=========================\n");
		
		//EXIBINDO OS NOMES DO ALUNO EM REPETI��O
		for ( i= 0; i <4; i++){
			printf ("%i� Aluno: %s \n", i+1, nome[i]);
			
			//EXIBINDO AS NOTAS COM  BASE DO NOME DO ALUNO
			for ( j= 0; j <3; j++){
				printf ("%i� nota: %1.f \n", j+1, notas[i][j]);
					
			}
			//EXIBINDO A MEDIA REPETI��O DOS ALUNOS
			printf ("M�dia: %1.f\n", media[i]);
			
			printf ("\n");
		}
		
	}

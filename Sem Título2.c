#include <stdio.h>
#include <locale.h>
#include <ctype.h>
int main  (){
	setlocale(LC_ALL,"");
	
	char sexo; 
	int idade, contadorSalariol = 0,  opcao; 
	int maiorIdade = 0, menorIdade = 999, mulheres5k;
	float salario, mediaSalario,somaSalarial = 0; //VARIAVEL CONTADOR SALARIO E VARIVAEL SOMA SALARIOL = MEDIA
	
	//MENU PARA EXIBIR OS DADOS
	do {
	printf ("Codigo \tDescrição");
	printf ("\n1 \t Adicionar Pessoa");
	printf ("\n2 \tExibir Resultados e Sair");
	
	printf ("\n\nO que vc quer? ");
	scanf ("%i", &opcao);
	
	
	//CASO SEJA SIM === 1
	switch (opcao){
		case 1:
		printf ("A idade:");
		scanf ("%i", &idade);
		fflush(stdin);
		printf ("Qual o seu sexo (M/F) ");
		scanf ("%c", &sexo);
		
		sexo = toupper(sexo); //Converter para Maisculo
		
		printf ("Qual o seu salario? ");
		scanf ("%f", &salario);
		
			
			somaSalarial = somaSalarial + salario; // ou use SomaSalario += salario
			
			contadorSalariol++;  //Ou use CONTADOR SALARIO = CONTADOR 
		
			if (idade > maiorIdade){
				maiorIdade = idade;
			}
			
			if (idade < menorIdade)
				menorIdade = idade;
				
			if (sexo == 'F' && salario >= 5000 )
				mulheres5k++;
		
		break;
		case 2:
		 mediaSalario = somaSalarial / contadorSalariol;
			
			printf ("Média do salario em grupo: %2.f\n", mediaSalario);
			printf ("Maior idade do grupo: %i \n", maiorIdade);
			printf ("Menor idade do grupo: %i \n", menorIdade);
			printf ("Quantidade de mulheres com mais de 5k: %i\n", mulheres5k);
			
			
			
		break;
		default:
			printf ("Opação Invalida...");
		
		}
		
	}while ( opcao !=2);
	
	}

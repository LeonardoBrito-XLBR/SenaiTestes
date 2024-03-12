#include <stdio.h>
#include <locale.h>

int main  (){
	setlocale(LC_ALL,"");
	
	char sexo, codigo; 
	int idade, contadorSalariol, somaSalarial; 
	float salario, mediaSalario; //VARIAVEL CONTADOR SALARIO E VARIVAEL SOMA SALARIOL = MEDIA
	
	
	printf ("Codigo - \t\tDescrição");
	printf ("\n1 \tAdicionar Pessoa");
	printf ("\n2 \tExibir Resultados e Sair");
	
	printf ("O que vc quer? ");
	scanf ("%c", codigo);
	
	//CASO SEJA SIM
	while (codigo == '1'){
		printf ("Qual o seu sexo (M = Masculino e F = Feminino)? ");
		scanf ("%c", &sexo);
		
		printf ("Qual o seu salario? ");
		scanf ("%f", &salario);
		
		
	
	
}

}

#include <stdio.h>
#include <string.H> //strcmp ( ); COMPARAÇÃO ENTRE INTENS
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> // sleep ( ); DETERMINAR O TEMPO DE ESPERA

int main (){
	
	char senha [500], login [500];
	char senhaCadastrada[500], loginCadastrada [500];
	
	char loginCerta, senhaCerta;
	
	//LOGO TIPO DE BOAS VINDAS
	printf ("======= SISTEMA DA NASA =======");
	
	//SOLICITANDO O USUARIO
	printf ("\nDigite o seu login: ");
	scanf ("%s", &login);
	printf ("Digite a sua senha: ");
	scanf ("%s", &senha);
	
	
	
	system ("cls || clear");
	
	sleep (5); //PAUSAR O CODIGO POR CERTO TEMPO 
	
	printf ("Entre Login: ");
	scanf ("%s", &loginCadastrada);
	
	printf ("Entre Senha: ");
		
	scanf ("%s", &senhaCadastrada);
	
	
	
		
	do{
	
		printf ("\nERRO AO ENTRAR NO SITE NASA");
			
			printf ("\nEntre Login: ");
			scanf ("%s", &loginCadastrada);
	
			printf ("Entre Senha: ");
			scanf ("%s", &senhaCadastrada);
			
			senhaCerta =  strcmp (senhaCadastrada, senha) ==0;
			loginCerta = strcmp (loginCadastrada, login ) == 0;
			
			
		
	}while (!loginCerta|| !senhaCerta);
	
		printf ("\nACESSANDO O SISTEMA...");
	

}

#include <stdio.h>
#include <string.H> //strcmp ( )
#include <stdlib.h>

int main (){
	
	char senha [500], login [500];
	char senhaCadastrada[500], loginCadastrada [500];
	
	//LOGO TIPO DE BOAS VINDAS
	printf ("======= SISTEMA DA NASA =======");
	
	//SOLICITANDO O USUARIO
	printf ("\nDigite o seu login: ");
	scanf ("%s", &login);
	printf ("Digite a sua senha: ");
	scanf ("%s", &senha);
	
	system ("cls || clear");
	
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
		
	}	while ( strcmp (senhaCadastrada, senha) !=0 || strcmp (loginCadastrada, login ) != 0 );
	
		printf ("\nACESSANDO O SISTEMA...");
	

}

#include <stdio.h>
#include <locale.h>

	int main (){
		setlocale (LC_ALL,"");
		
		int i;
		float nota, soma =0, media;
		
		
		for (i=1; i<=3; i++ ){
			
			do{
				printf ("Digite a %i� nota: ", i);
				scanf ("%f", &nota);
			}while (nota <0 || nota >10);
			
			//FAZENDO A SOMA DE QUANTAS NOTAS
			soma = soma + nota;
		}
		//APLICANDO A MEDIA 
		media = soma / 3;
		
		//VERIFICANDO A SITUA��O
		if (media >= 7 ){
			printf ("Voc� esta aprovado AMIGO ");
			
		}else if (media >=5){
			
			printf ("Voc� esta na recupera��o, ainda da tempo ");
		
		}else {
			printf ("Voc� esta reprovado AMIGO ");
		}
		return 0;
		
	}

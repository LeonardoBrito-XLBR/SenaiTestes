#include <stdio.h>
#include <locale.h>

	int main (){
		setlocale (LC_ALL,"");
		
		int i;
		float nota, soma =0, media;
		
		
		for (i=1; i<=3; i++ ){
			
			do{
				printf ("Digite a %iª nota: ", i);
				scanf ("%f", &nota);
			}while (nota <0 || nota >10);
			
			//FAZENDO A SOMA DE QUANTAS NOTAS
			soma = soma + nota;
		}
		//APLICANDO A MEDIA 
		media = soma / 3;
		
		//VERIFICANDO A SITUAÇÃO
		if (media >= 7 ){
			printf ("Você esta aprovado AMIGO ");
			
		}else if (media >=5){
			
			printf ("Você esta na recuperação, ainda da tempo ");
		
		}else {
			printf ("Você esta reprovado AMIGO ");
		}
		return 0;
		
	}

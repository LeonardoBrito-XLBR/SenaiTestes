#include<stdio.h>

void logo (){
 printf("====== SISTEMA DE 1 a 100 ======");
}

int main()
{
        int numero, contador =0;
        

     logo ();

    printf("\nDigite um n�mero: ");
    scanf("%i", &numero);
    
    while ( numero != 50){
  
                     
                     if (numero < 50){
                         printf("Um pouco mais ");
                     } else {
                         printf("Um pouco menos");
                     }
            contador +=1;
            
           }
            
               if (numero == 50){
                printf("\nParab�ns");
                printf("\nVoc� errou %i vezes: ", contador);
            }
}

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int i, numero;
    int pares = 0, impares = 0, negative = 0, positivo = 0, num;


	do {
	
		printf ("Digite um n�mero: ");
		
        scanf("%i", &numero);
        
        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        
        if (numero >= 0) {
            positivo++;
        } 
        
        if (numero < 0){
            negative++;
        }
        
        num += 1;


} while (numero != 0);
    	
    printf("\nQuantidade de n�meros pares: %i", pares);
    printf("\nQuantidade de n�meros �mpares: %i", impares);
    printf("\nQuantidade de n�meros positivos: %i", positivo);
    printf("\nQuantidade de n�meros negativos: %i", negative);
    printf("\nQuantidade de n�meros inseridos: %i\n", num);

    return 0;
}

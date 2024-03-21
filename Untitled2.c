#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int i, numero;
    int pares = 0, impares = 0, negative = 0, positivo = 0, num;


	do {
	
		printf ("Digite um número: ");
		
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
    	
    printf("\nQuantidade de números pares: %i", pares);
    printf("\nQuantidade de números ímpares: %i", impares);
    printf("\nQuantidade de números positivos: %i", positivo);
    printf("\nQuantidade de números negativos: %i", negative);
    printf("\nQuantidade de números inseridos: %i\n", num);

    return 0;
}

#include <stdio.h>
#include <locale.h>
#define num 6

int main() {
    setlocale(LC_ALL, "portuguese");

    int i, numero[num];
    int pares = 0, impares = 0, negative = 0, positivo = 0;

    for (i = 0; i < num; i++) {
        printf("Digite o %i� n�mero: ", i + 1);
        scanf("%i", &numero[i]);
        
        if (numero[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        
        if (numero[i] > 0) {
            positivo++;
        } else {
            negative++;
        }
    }

    printf("\nQuantidade de n�meros pares: %i", pares);
    printf("\nQuantidade de n�meros �mpares: %i", impares);
    printf("\nQuantidade de n�meros positivos: %i", positivo);
    printf("\nQuantidade de n�meros negativos: %i", negative);
    printf("\nQuantidade de n�meros inseridos: %i\n", num);

    return 0;
}

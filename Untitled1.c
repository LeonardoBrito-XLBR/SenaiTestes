#include <stdio.h>
#include <locale.h>
#define num 6

int main() {
    setlocale(LC_ALL, "portuguese");

    int i, numero[num];
    int pares = 0, impares = 0, negative = 0, positivo = 0;

    for (i = 0; i < num; i++) {
        printf("Digite o %iº número: ", i + 1);
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

    printf("\nQuantidade de números pares: %i", pares);
    printf("\nQuantidade de números ímpares: %i", impares);
    printf("\nQuantidade de números positivos: %i", positivo);
    printf("\nQuantidade de números negativos: %i", negative);
    printf("\nQuantidade de números inseridos: %i\n", num);

    return 0;
}

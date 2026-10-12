#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor, soma = 0;
    float media;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for (int i = 0; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        soma += numeros[i];
    }

    media = (float) soma / 10;

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}

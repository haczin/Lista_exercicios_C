#include <stdio.h>

int main() {
    int numero, limite;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Digite o limite da tabuada: ");
    scanf("%d", &limite);

    printf("\nTabuada do %d (ate %d):\n", numero, limite);
    for (int i = 1; i <= limite; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

#include <stdio.h>

float celsiusParaFahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}

int main() {
    float c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = celsiusParaFahrenheit(c);

    printf("%.2f C = %.2f F\n", c, f);
    return 0;
}

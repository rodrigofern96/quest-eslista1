#include <stdio.h>

int main (){

float celsius, fahrenheit;

printf("Digite o valor em Celsius para converter em Fahrenheit: ");
scanf("%f", &celsius);

fahrenheit = (9 * celsius + 160) / 5;

printf("O valor em fahrenheit é: %.2f\n ", fahrenheit);

    return 0;
}
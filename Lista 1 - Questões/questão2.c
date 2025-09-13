#include <stdio.h>

int main(){

float numero;

printf("Digite um número de valor real: ");
scanf("%f", &numero);

printf("Valor com a casa decimal: %1.f\n", numero);

return 0;
}
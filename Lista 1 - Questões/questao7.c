#include <stdio.h>

int main(){
int numero, quadrado;

printf("Digite um valor desejado: ");
scanf("%d", &numero);

quadrado = numero * numero;

printf("O valor ao quadrado é: %1.d\n", quadrado);

     return 0;
}
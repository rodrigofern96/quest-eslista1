#include <stdio.h>

int main (){

int numero, sucessor, antecessor;

printf("Digite um valor desejado para calcular o sucessor e antecessor: ");
scanf("%d", &numero);

sucessor = numero + 1;
antecessor = numero - 1;

printf("O valor que você digitou: %d\n ", numero);
printf("O sucessor do valor que você digitou: %d\n ", sucessor);
printf("O antecessor do valor que você digitou: %d\n ", antecessor);

    return 0;
}
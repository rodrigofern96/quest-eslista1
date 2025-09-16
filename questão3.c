#include <stdio.h>

int main(){

int numero, triplo, quadrado, meio;

printf("Digite o valor desejado para fazer os cálculos: ");
scanf("%d", &numero);

triplo = numero * 3;
quadrado = numero * numero;
meio = numero / 2;

printf("O triplo do número: %d\n ", triplo);
printf("O quadrado do número é: %d\n ", quadrado);
printf("O meio do número é: %d\n ", meio);

    return 0;
}
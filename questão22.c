#include <stdio.h>

int main() {
    int num, centenas, dezenas, unidades, invertido;
    
    printf("Digite um numero de tres digitos: ");
    scanf("%d", &num);
    
    centenas = num / 100;
    dezenas = (num / 10) % 10;
    unidades = num % 10;
    
    invertido = unidades * 100 + dezenas * 10 + centenas;
    
    printf("Numero invertido: %d\n", invertido);
    
    return 0;
}
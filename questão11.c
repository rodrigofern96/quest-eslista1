#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    printf("Soma: %d\n", a + b);
    printf("Produto: %d\n", a * b);
    printf("Diferenca: %d\n", a - b);
    printf("Quociente: %d\n", a / b);
    printf("Resto: %d\n", a % b);
    
    return 0;
}
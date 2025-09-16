#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    printf("%d e %s de %d\n", a, (a % b == 0) ? "multiplo" : "nao multiplo", b);
    
    return 0;
}
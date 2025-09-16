#include <stdio.h>

int main() {
    int x, n, resultado;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    resultado = x << n;
    
    printf("Resultado: %d\n", resultado);
    
    return 0;
}
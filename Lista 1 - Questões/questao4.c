#include <stdio.h>

int main() {
    float valor_conta;
    
    printf("Digite o valor da conta: R$ ");
    scanf("%f", &valor_conta);
    
    printf("Valor da conta: R$ %.2f\n", valor_conta);
    printf("Taxa do garcom (10%%): R$ %.2f\n", valor_conta * 0.1);
    printf("Valor total a pagar: R$ %.2f\n", valor_conta * 1.1);
    
    return 0;
}
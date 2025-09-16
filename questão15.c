#include <stdio.h>

int main() {
    float valorHora, horas, inss, bruto, liquido;
    
    printf("Valor da hora aula: ");
    scanf("%f", &valorHora);
    
    printf("Horas trabalhadas: ");
    scanf("%f", &horas);
    
    printf("Percentual INSS: ");
    scanf("%f", &inss);
    
    bruto = valorHora * horas;
    liquido = bruto * (1 - inss / 100);
    
    printf("Salario bruto: R$ %.2f\n", bruto);
    printf("Salario liquido: R$ %.2f\n", liquido);
    
    return 0;
}
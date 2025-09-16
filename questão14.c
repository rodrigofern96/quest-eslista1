#include <stdio.h>

int main() {
    int dias;
    float salario;

    printf("Dias trabalhados: ");
    scanf("%d", &dias);

    salario = dias * 50.25;
    salario += (dias > 20) ? salario * 0.3 : (dias > 10 ? salario * 0.2 : 0);
    salario *= 0.9;

    printf("Valor liquido: R$ %.2f\n", salario);

    return 0;
}
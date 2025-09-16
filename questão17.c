#include <stdio.h>

int main (){

float raio, diametro, circunferencia, area;

printf("Digite o valor do raio: ");
scanf("%f", &raio);

diametro = raio * 2;
circunferencia = (2 * 3.14159 * raio);
area = (3.14159 * (raio * raio));

printf("O valor do diâmetro é: %.2f\n", diametro);
printf("O valor da circunferencia é: %.2f\n", circunferencia);
printf("O valor do area é: %.2f\n", area);
    return 0;
}
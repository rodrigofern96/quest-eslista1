#include <stdio.h>

int main(){
float volume, comprimento, altura, largura;

printf("Digite o valor do comprimento desejado: ");
scanf("%f", &comprimento);
printf("Digite o valor da altura desejado: ");
scanf("%f", &altura);
printf("Digite o valor da largura desejado: ");
scanf("%f", &largura);

volume = comprimento * altura * largura;

printf("O cálculo concluido foi: %1.f\n", volume);     

    return 0;
}
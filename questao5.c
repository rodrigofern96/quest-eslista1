#include <stdio.h>

int main(){
float altura, peso_ideal;
char sexo;

printf("Digite o valor da altura: ");
scanf("%f", &altura);

printf("Digite o sexo: ");
scanf(" %c", &sexo);

if (sexo == 'H' || sexo == 'h'){
peso_ideal = (72.7 * altura) - 58;
}
else{
peso_ideal = (62.1 * altura) - 44.7;
}

printf("O cálculo é: %.2f\n", peso_ideal);
printf("O sexo escolhido no programa é: %c\n", sexo);


    return 0;
}
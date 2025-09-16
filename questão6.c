#include <stdio.h>

int main (){

int horas, minutos, segundos;
int total_segundos;

printf("Digite as horas que deseja efetuar o cálculo: ");
scanf("%d", &horas);

printf("Digite o minuto que deseja efetuar o cálculo: ");
scanf("%d", &minutos);

printf("Digite os segundos que deseja efetuar o cálculo: ");
scanf("%d", &segundos);

total_segundos = (horas*3600) + (minutos*60) + segundos;

printf("O valor calculado é: %d\n", total_segundos);

    return 0;
}
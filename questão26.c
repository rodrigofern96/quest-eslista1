#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double media_aritmetica, media_geometrica;

    printf("Digite tres numeros em ponto flutuante:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    media_aritmetica = (a + b + c) / 3.0;
    media_geometrica = pow(a * b * c, 1.0 / 3.0);
    
    printf("Media aritmetica = %.3lf\n", media_aritmetica);
    printf("Media geometrica = %.3lf\n", media_geometrica);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){

    int x1, x2, y1, y2;
    float dist;

    puts("Digite as cordenadas do ponto X: ");
    scanf("%d %d", &x1, &y1);

    puts("Dgite as coordenadas do ponto Y: ");
    scanf("%d %d", &x2, &y2);

    printf("Coordenadas do primeiro ponto X: (%d, %d)\n", x1, y1);
    printf("Coordenadas do primeiro ponto Y: (%d, %d)", x2, y2);

    dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distancia entre os pontos é de: %f", dist);

    return 0;
}
#include <stdio.h>

int main() {
    int total, h, m, s;
    
    printf("Digite o tempo em segundos: ");
    scanf("%d", &total);
    
    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;
    
    printf("%d horas, %d minutos e %d segundos\n", h, m, s);
    
    return 0;
}
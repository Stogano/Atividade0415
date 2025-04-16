#include <stdio.h>
#include "util.h"
int main() {
    // Write C code here
    double raio, circunferencia1, area1, diametro1;
    printf("Digite o raio: ");
    scanf("%lf", &raio);
    circunferencia1=circunferencia(raio);
    area1=area(raio);
    diametro1=diametro(raio);
    printf("A circunferencia é: %lf\n","A area é: %lf\n","O diametro é: %lf\n",circunferencia1, area1,diametro1);
    return 0;
}
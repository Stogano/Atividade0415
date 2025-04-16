#include <stdio.h>
#include "igualdade.h"
int main(void) {
    int igual1,maior1,menor1;
    int a, b;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    igual1=igual(a, b);
    maior1=maior(a, b);
    menor1=menor(a, b);
    if (igual1==1){
        printf("Os numeros sao iguais\n");
    }
    else{
        printf("Os numeros sao diferentes\n");
        printf("O maior numero é: %d\n", maior1);
        printf("O menor numero é: %d\n", menor1); 
    }
    return 0;
}
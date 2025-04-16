#include <stdio.h>
#include "igualdade.h"
int main(void) {
    int maior1, grandao;
    int a, b,c;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    printf("Digite outro numero: ");
    scanf("%d", &c);
    maior1=maior(a, b);
    if (maior1>c){
        grandao=maior1;
    }
    else{
        grandao=c;
    }
    printf("O maior numero é: %d\n", grandao );
    
    return 0;
}
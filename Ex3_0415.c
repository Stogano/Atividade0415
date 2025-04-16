#include <stdio.h>

int numero() {
    int numero;
    printf("Digite um numero\n");
    scanf("%d", &numero);
    return numero;
}
int main() {
    int num = numero();
    printf("Numero informado: %d", num);
    return 0;
}
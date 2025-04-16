#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2;
    
    printf("digite o primeiro numero: \n");
    scanf("%d", &num1);
    
    printf("digite o segundo numero: \n");
    scanf("%d", &num2);
    
    int numero = soma(num1, num2);
    
    printf("o resultado: %d", numero);
    
    return 0;
}
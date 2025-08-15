#include <stdio.h>

int main(){
    int num1;
    int num2;
    int resultado;


    printf("Digite um numero:\n");
    scanf("%d", &num1);

    printf("Digite outro numero:\n");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("O resultado e: %d\n", resultado);
}
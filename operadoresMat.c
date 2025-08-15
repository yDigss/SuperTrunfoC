#include <stdio.h>

// Operadores matematicos em C

int main(){

    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    // adicionando o primeiro numero a variavel num1
    printf("Entre com o primeiro valor: \n");
    scanf("%d", &num1);

    // adicionando o segundo numero a variavel num2
    printf("Entre com o segundo valor: \n");
    scanf("%d", &num2);

    // operador de soma/adição
    soma = num1 + num2;

    // operador de subtração
    subtracao = num1 - num2;

    //operador de multiplicaçao
    multiplicacao = num1 * num2;

    //operador de divisão
    divisao = num1 / num2;

    //imprimindo os resultados
    printf("O resultado da soma dos valores e: %d \n", soma);
    printf("O resultado da subtracao dos valores e: %d \n", subtracao);
    printf("O resultado da multiplicacao dos valores e: %d \n", multiplicacao);
    printf("O resultado da divisao dos valores e: %d \n", divisao);
}
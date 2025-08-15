#include <stdio.h>

int main(){

    // Criando todas as variaveis
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinA = 500;
    unsigned int estoqueMinB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // Imprimindo os valores na tela
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoB, estoqueB, valorB);

    // Comparação dos valores
    resultadoA = estoqueA > estoqueMinA;
    resultadoB = estoqueB > estoqueMinB;

    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    // Comparação dos valores Totais

    printf("Valor total de A (R$ %.2f) e maior que valor total de B (R$ %.2f)? %d \n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}
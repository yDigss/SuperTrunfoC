#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    srand(time(0));
    numeroComputador = rand() %100 + 1;

    // Inicio do Jogo
    printf("================================================");
    printf("\n    Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("================================================");
    printf("\n\nVoce deve escolher um numero e o tipo de comparacao.\n");
    printf("M - Maior\n");
    printf("N - Menor\n");
    printf("I - Igual\n");

    printf("Escolha a comparacao: ");
    scanf("%c", &tipoComparacao);

    printf("\nDigite um numero (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    // Exibir os numeros

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("\n==== Voce escolheu a opcao MAIOR ====\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0 ;
        break;
    case 'N':
    case 'n':
        printf("\n==== Voce escolheu a opcao MENOR ====\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0 ;
        break;
    case 'I':
    case 'i':
        printf("\n==== Voce escolheu a opcao IGUAL ====\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0 ;
        break;
    
    default:
        printf("Opcao de jogo invalida!");
        break;
    }

    printf("\nO numero do computador e: %d | e do jogador e: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf("\nParabens, voce venceu!\n");
    }
    else
    {
        printf("\nInfelizmente, voce perdeu!\n");
    }
    



return 0;
}
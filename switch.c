#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000;

    printf("Escolha uma opcao:\n");
    printf("1 - Verificar saldo\n");
    printf("2 - Fazer deposito\n");
    printf("3 - Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O seu saldo e : R$ %.2f\n", saldo);
        break;
    
    case 2:
        printf("Digite o banco que voce deseja depositar\n");
        printf("Digite a agencia que voce deseja depositar\n");
        printf("Digite a conta que voce deseja depositar\n");
        break;

    case 3:
        printf("Digite o valor que voce deseja sacar");
        break;
    
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}
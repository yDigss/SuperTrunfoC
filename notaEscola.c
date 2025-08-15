#include <stdio.h>

int main(){

    int opcao;
    float nota1, nota2, media;

    printf("\n===============================================\n");
    printf("\n    Menu de Gerenciamento de Estudantes\n");
    printf("\n===============================================\n");
    printf("\n1 - Calcular Media\n");
    printf("2 - Determinar Status\n");
    printf("3 - Sair\n");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n======= Calcular media =======\n");
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        // Testar condição se a nota é >= 0 ou <= 10
        if ( (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            media = (nota1 + nota2) / 2;
            printf("Media: %.2f\n", media);
        }
        else{
            printf("Entrada de valores invalida!");
        }
        break;
    
    case 2:
        printf("\n======= Determinar Status =======\n");
        printf("Entre com a media: ");
        scanf("%f", &media);
        //media >= 5 ? printf("Aprovado!") : printf("Reprovado!\n");
        if (media >= 7){
            printf("Aprovado!\n");
        } else if (media >= 5){
            printf("Recuperacao!\n");
        } else {
            printf("Reprovado!\n");
        }
        break;

    case 3:
        printf("Saindo....");
        break;

    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}
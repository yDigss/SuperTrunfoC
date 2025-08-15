#include <stdio.h>

int main(){

    int nota1, nota2, nota3;

    printf("Informe sua primeira nota: ");
    scanf("%d", &nota1);

    printf("Informe sua segunda nota: ");
    scanf("%d", &nota2);

    printf("Informe sua terceira nota: ");
    scanf("%d", &nota3);

    int soma = nota1 + nota2 + nota3;
    
    float media = (float) soma / 3;

    printf("A sua media e: %.2f\n", media);

    return 0;
}
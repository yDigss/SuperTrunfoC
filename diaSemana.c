#include <stdio.h>

int main() {

    int dia;
    printf("Entre o valor do Dia\n");
    scanf("%d", &dia);

    // uso de switch cases para verificar os dias da semana

    switch (dia)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-Feira\n");
        break;
    case 3:
        printf("Terca-Feira\n");
        break;
    case 4:
        printf("Quarta-Feira\n");
        break;
    case 5:
        printf("Quinta-Feira\n");
        break;
    case 6:
        printf("Sexta-Feira\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    
    default:
        printf("Dia invalido\n");
        break;
    }







/* Uso de if, else e else if para verificar os dias da semana
    if (dia == 1){
        printf("Domingo\n");
    }
    else if (dia == 2){
        printf("Segunda-Feira\n");
    }
    else if (dia == 3){
        printf("Terca-Feira\n");
    }
    else if (dia == 4){
        printf("Quarta-Feira\n");
    }
    else if (dia == 5){
        printf("Quinta-Feira\n");
    }
    else if (dia == 6){
        printf("Sexta-Feira\n");
    }
    else{
        printf("Sabado\n");
    }
*/
    return 0;
}
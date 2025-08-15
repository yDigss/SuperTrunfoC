#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMin = 1000;

    printf("Entre com a temperatura: ");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: ");
    scanf("%f", &umidade);
    printf("Entre com o estoque: ");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("Temperatura alta!!\n");
    }
    else{
        printf("Temperatura normal\n");
    }

    if (umidade > 50){
        printf("Alerta Critico! umidade alta \n");
    }
    else{
        printf("Umidade normal\n");
    }

    if (estoque < estoqueMin){
        printf("Estoque baixo!\n");
    }
    else{
        printf("Estoque normal\n");
    }
    return 0;
}